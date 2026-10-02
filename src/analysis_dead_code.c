// analysis_dead_code.c
#include <stdlib.h>
#include "analysis.h"
#include "graph.h"

bool detect_dead_code(Graph *cfg) {
    // Simplified detection logic
    for (int i = 0; i < cfg->node_count; ++i) {
        if (!visit_node(&cfg->nodes[i], i)) {
            return true; // Unreachable code detected
        }
    }
    return false;
}
