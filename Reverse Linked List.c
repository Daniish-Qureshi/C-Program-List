void reverse() {
    struct Node *prev = NULL, *current = head, *next = NULL;
    while(current) {
        next = current->next; current->next = prev;
        prev = current; current = next;
    }
    head = prev;
}
