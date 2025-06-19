struct Node { int data; struct Node* next; };
struct Node *front = NULL, *rear = NULL;
void enqueue(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val; newNode->next = NULL;
    if(rear == NULL) front = rear = newNode;
    else { rear->next = newNode; rear = newNode; }
}
void dequeue() {
    if(front == NULL) printf("Underflow\n");
    else {
        struct Node* temp = front; front = front->next;
        if(front == NULL) rear = NULL;
        free(temp);
    }
}
