void insertAtEnd(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while(temp->next) temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}
