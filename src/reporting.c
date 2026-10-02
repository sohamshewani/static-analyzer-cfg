// reporting.c
#include <stdio.h>
#include "reporting.h"
#include "analysis.h"

void report_results(const char *filename, bool is_dead_code, bool is_memory_leak) {
    if (is_dead_code) {
        report_dead_code(filename, -1); // Dummy node ID
    }
    if (is_memory_leak) {
        report_memory_leak(filename, -1); // Dummy node ID
    }
}

void report_dead_code(const char *filename, int node_id) {
    fprintf(stderr, "Dead code detected in file: %s\n", filename);
    // Further details on dead code
}

void report_memory_leak(const char *filename, int node_id) {
    fprintf(stderr, "Memory leak detected in file: %s\n", filename);
    // Further details on memory leak
}

void report_general(const char *message) {
    fprintf(stderr, "General message: %s\n", message);
}
