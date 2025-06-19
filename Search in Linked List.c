int search(int key) {
    struct Node* temp = head;
    int pos = 0;
    while(temp != NULL) {
        if(temp->data == key)
            return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}
