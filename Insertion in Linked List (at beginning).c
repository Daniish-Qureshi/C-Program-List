void insertAtBeginning(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val; newNode->next = head; head = newNode;
}
