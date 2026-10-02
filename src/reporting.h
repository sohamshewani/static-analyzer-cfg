// reporting.h
#include <stdio.h>

// Functions for reporting analysis results
void report_results(const char *filename, bool is_dead_code, bool is_memory_leak);
void report_dead_code(const char *filename, int node_id);
void report_memory_leak(const char *filename, int node_id);
void report_general(const char *message);
