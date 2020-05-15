#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "roads.h"

int check_if_true(graph *graph_prot, char *name)
{
    for(size_t i = 0; i < graph_prot->nvertices; i++){
        if(strcmp(name, graph_prot->vertices[i].name)){
            return 0;
        }
    }

    return -1;
}

void length_of_roads(graph *graph_prot)
{

}

uint16_t shortest_way(graph *graph_prot, int start, int finish)
{

}

uint16_t longest_way(graph *graph_prot, int start, int finish)
{

}

uint16_t num_of_all_roads(graph *graph_prot, int start, int finish)
{

}