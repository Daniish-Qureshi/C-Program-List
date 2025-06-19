void findMiddle() {
    struct Node *slow = head, *fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(slow)
        printf("Middle element: %d\n", slow->data);
}
