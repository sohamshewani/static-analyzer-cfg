// graph.h
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// Define the node structure
struct Node;
typedef struct Node Node;

// Define the edge structure
struct Edge;
typedef struct Edge Edge;

// Define the graph structure
struct Graph;
typedef struct Graph Graph;

// Node structure
struct Node {
    int id;
    Edge *edges;
    bool visited;
};

// Edge structure
struct Edge {
    int to;
    bool isBackEdge;
};

// Graph structure
struct Graph {
    Node *nodes;
    int node_count;
};

// Create a new graph
Graph* graph_new(int nodes_count);

// Add an edge to the graph
void graph_add_edge(Graph *graph, int from, int to);

// Visit a node
bool visit_node(Node *node, int id);

// Mark all nodes as unvisited
void graph_mark_all_unvisited(Graph *graph);

// Clean up the graph
void graph_free(Graph *graph);
