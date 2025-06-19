void deleteFromEnd() {
    if(head == NULL) return;

    struct Node* temp = head;
    if(temp->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    while(temp->next) temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
}
