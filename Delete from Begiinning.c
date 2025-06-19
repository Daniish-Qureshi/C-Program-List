void deleteFromBeginning() {
    if(head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    if(head) head->prev = NULL;
    free(temp);
}