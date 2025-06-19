#include <stdbool.h>
#define SIZE 100

void BFS(int graph[V][V], int start) {
    int queue[SIZE], front = 0, rear = 0;
    bool visited[V] = {false};

    queue[rear++] = start;
    visited[start] = true;

    while(front < rear) {
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < V; i++) {
            if(graph[node][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = true;
            }
        }
    }
}
