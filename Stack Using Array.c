#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;
void push(int val) {
    if(top == SIZE-1) printf("Overflow\n");
    else stack[++top] = val;
}
void pop() {
    if(top == -1) printf("Underflow\n");
    else top--;
}
void display() {
    for(int i = top; i >= 0; i--) printf("%d ", stack[i]);
}
