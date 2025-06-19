#include <stdio.h>
#define SIZE 5
int cq[SIZE], front = -1, rear = -1;

void enqueue(int val) {
    if((rear + 1) % SIZE == front) printf("Overflow\n");
    else {
        if(front == -1) front = rear = 0;
        else rear = (rear + 1) % SIZE;
        cq[rear] = val;
    }
}

void dequeue() {
    if(front == -1) printf("Underflow\n");
    else if(front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
}

void display() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    printf("Circular Queue: ");
    while(1) {
        printf("%d ", cq[i]);
        if(i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
