void deleteByValue(int val) {
    if(head == NULL) return;

    if(head->data == val) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

    struct Node* temp = head;
    while(temp->next != NULL && temp->next->data != val)
        temp = temp->next;

    if(temp->next == NULL) return;

    struct Node* del = temp->next;
    temp->next = temp->next->next;
    free(del);
}
