struct Node { int data; struct Node *prev, *next; };
struct Node* head = NULL;
void insert(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val; newNode->prev = NULL; newNode->next = head;
    if(head) head->prev = newNode; head = newNode;
}
