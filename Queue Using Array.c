#define SIZE 5
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
