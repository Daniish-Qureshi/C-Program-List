void DFS(int v, int V, int adj[][V], int visited[]) {
    visited[v] = 1;
    printf("%d ", v);
    for(int i = 0; i < V; i++)
        if(adj[v][i] && !visited[i])
            DFS(i, V, adj, visited);
}
