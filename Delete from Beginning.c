void deleteFromBeginning() {
    if(head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}
