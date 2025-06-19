#include <stdio.h>
#define SIZE 100
int queue[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if(rear == SIZE - 1) printf("Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = val;
    }
}

void dequeue() {
    if(front == -1 || front > rear) printf("Underflow\n");
    else front++;
}

void display() {
    if(front == -1 || front > rear) printf("Queue is empty\n");
    else {
        for(int i = front; i <= rear; i++) printf("%d ", queue[i]);
        printf("\n");
    }
}
