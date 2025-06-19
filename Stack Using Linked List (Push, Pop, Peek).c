#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if(top == NULL) printf("Underflow\n");
    else {
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}

void peek() {
    if(top == NULL) printf("Stack is empty\n");
    else printf("Top: %d\n", top->data);
}
