#include <stdio.h>
#define SIZE 5
int dq[SIZE], front = -1, rear = -1;

void insertFront(int val) {
    if((front == 0 && rear == SIZE - 1) || (front == rear + 1)) printf("Overflow\n");
    else {
        if(front == -1) front = rear = 0;
        else if(front == 0) front = SIZE - 1;
        else front--;
        dq[front] = val;
    }
}

void insertRear(int val) {
    if((front == 0 && rear == SIZE - 1) || (front == rear + 1)) printf("Overflow\n");
    else {
        if(front == -1) front = rear = 0;
        else if(rear == SIZE - 1) rear = 0;
        else rear++;
        dq[rear] = val;
    }
}

void deleteFront() {
    if(front == -1) printf("Underflow\n");
    else if(front == rear) front = rear = -1;
    else if(front == SIZE - 1) front = 0;
    else front++;
}

void deleteRear() {
    if(front == -1) printf("Underflow\n");
    else if(front == rear) front = rear = -1;
    else if(rear == 0) rear = SIZE - 1;
    else rear--;
}

void display() {
    if(front == -1) {
        printf("Deque is empty\n");
        return;
    }
    int i = front;
    printf("Deque: ");
    while(1) {
        printf("%d ", dq[i]);
        if(i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
