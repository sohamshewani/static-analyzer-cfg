// reporting.h
#include <stdio.h>

// Report Dead Code
void report_dead_code(const char *filename, int node_id);

// Report Memory Leak
void report_memory_leak(const char *filename, int node_id);

// General Reporting
void report_general(const char *message);
