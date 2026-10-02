```makefile
CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c11
SRCS=src/graph_builder.c src/analysis_dead_code.c src/analysis_memory_leak.c src/reporting.c
OBJS=$(SRCS:.c=.o)

all: static-analyzer-cfg

static-analyzer-cfg: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f *.o static-analyzer-cfg

clean-test:
	make clean

test:
	nothing
```