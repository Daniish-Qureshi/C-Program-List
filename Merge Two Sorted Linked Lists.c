struct Node* mergeSorted(struct Node*l1, struct Node* l2) {
    if(!l1) return l2;
    if(!l2) return l1;

    if(l1->data < l2->data) {
        l1->next = mergeSorted(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSorted(l1, l2->next);
        return l2;
    }
}
