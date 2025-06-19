bool visited[V];

void DFS(int graph[V][V], int node) {
    printf("%d ", node);
    visited[node] = true;

    for(int i = 0; i < V; i++) {
        if(graph[node][i] && !visited[i]) {
            DFS(graph, i);
        }
    }
}
