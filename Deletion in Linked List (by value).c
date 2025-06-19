void deleteNode(int val) {
    struct Node *temp = head, *prev = NULL;
    while(temp && temp->data != val) {
        prev = temp; temp = temp->next;
    }
    if(temp == NULL) return;
    if(prev == NULL) head = head->next;
    else prev->next = temp->next;
    free(temp);
}
