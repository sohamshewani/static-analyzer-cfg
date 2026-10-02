// graph_builder.h
#include "graph.h"

// Functions for building the control flow graph
Graph* graph_new(int nodes_count);
void graph_add_edge(Graph *graph, int from, int to);
bool visit_node(Node *node, int id);
void graph_mark_all_unvisited(Graph *graph);
void graph_free(Graph *graph);
