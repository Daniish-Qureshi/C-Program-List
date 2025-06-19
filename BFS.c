void BFS(int start, int V, int adj[][V]) {
    int visited[V], queue[V], front = 0, rear = 0;
    for(int i = 0; i < V; i++) visited[i] = 0;
    queue[rear++] = start; visited[start] = 1;
    while(front < rear) {
        int curr = queue[front++];
        printf("%d ", curr);
        for(int i = 0; i < V; i++)
            if(adj[curr][i] && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
    }
}
