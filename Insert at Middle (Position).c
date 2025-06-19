void insertAtPosition(int val, int pos) {
    if(pos < 0) return;
    if(pos == 0) {
        insertAtBeginning(val);
        return;
    }

    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;

    struct Node* temp = head;
    for(int i = 0; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if(temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}
