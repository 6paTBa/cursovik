#include <stdio.h>

typedef struct{
    char *name;
} names;

typedef struct{
    size_t nvertices;
    names *vertices;
    int *roads;
} graph;