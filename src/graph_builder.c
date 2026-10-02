// graph_builder.c
#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

Graph* graph_new(int nodes_count) {
    Graph *graph = malloc(sizeof(Graph));
    if (!graph) {
        fprintf(stderr, "Failed to allocate memory for graph\n");
        return NULL;
    }

    graph->nodes = malloc(nodes_count * sizeof(Node));
    if (!graph->nodes) {
        fprintf(stderr, "Failed to allocate memory for nodes\n");
        free(graph);
        return NULL;
    }

    graph->node_count = nodes_count;
    for (int i = 0; i < nodes_count; ++i) {
        graph->nodes[i].edges = NULL;
        graph->nodes[i].visited = false;
    }
    return graph;
}

void graph_add_edge(Graph *graph, int from, int to) {
    // Simplified implementation for adding an edge
    // In a real-world scenario, this would involve proper edge management
}

bool visit_node(Node *node, int id) {
    if (node->visited) {
        return false;
    }
    node->visited = true;
    return true;
}

void graph_mark_all_unvisited(Graph *graph) {
    for (int i = 0; i < graph->node_count; ++i) {
        graph->nodes[i].visited = false;
    }
}

void graph_free(Graph *graph) {
    if (graph) {
        for (int i = 0; i < graph->node_count; ++i) {
            if (graph->nodes[i].edges) {
                free(graph->nodes[i].edges);
            }
        }
        free(graph->nodes);
        free(graph);
    }
}
