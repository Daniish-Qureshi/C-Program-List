void deleteByValue(int val) {
    struct Node* temp = head;

    while(temp && temp->data != val)
        temp = temp->next;

    if(temp == NULL) return;

    if(temp->prev) temp->prev->next = temp->next;
    else head = temp->next;

    if(temp->next) temp->next->prev = temp->prev;

    free(temp);
}
