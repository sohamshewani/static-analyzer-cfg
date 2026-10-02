// analysis.h
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "graph.h"

// Dead Code Detection
bool detect_dead_code(Graph *cfg);

// Memory Leak Detection
bool detect_memory_leaks(Graph *cfg);

// Reporting
void report_results(const char *filename, bool is_dead_code, bool is_memory_leak);
