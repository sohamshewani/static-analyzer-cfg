```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/graph.h"
#include "include/analysis.h"
#include "include/reporting.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file>
", argv[0]);
		return 1;
	}

graph_t *graph = NULL;

if (read_graph(argv[1], &graph) != 0) {
	fprintf(stderr, "Error reading graph from file %s\n", argv[1]);
	return 1;
}

analysis_result_t result = analyze_graph(graph);

generate_report(result, argv[1]);

free_graph(graph);

return 0;
}
```