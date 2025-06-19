#include <stdio.h>
#define V 4

void createGraph(int graph[V][V]) {
    for(int i = 0; i < V; i++)
        for(int j = 0; j < V; j++)
            graph[i][j] = 0;

    graph[0][1] = 1;
    graph[1][2] = 1;
    graph[2][3] = 1;
    graph[3][0] = 1;
}

void display(int graph[V][V]) {
    printf("Adjacency Matrix:\n");
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }
}
