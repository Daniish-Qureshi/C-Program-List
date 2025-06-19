struct Node { int vertex; struct Node* next; };
struct Graph {
    int V;
    struct Node** adjList;
};
