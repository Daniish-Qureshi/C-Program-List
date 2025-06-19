#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

#define V 4
struct Node* adjList[V];

void addEdge(int src, int dest) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = dest;
    newNode->next = adjList[src];
    adjList[src] = newNode;
}

void displayGraph() {
    for(int i = 0; i < V; i++) {
        struct Node* temp = adjList[i];
        printf("Adj[%d]:", i);
        while(temp) {
            printf(" → %d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
