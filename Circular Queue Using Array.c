#define SIZE 5
int cqueue[SIZE], front = -1, rear = -1;
void enqueue(int val) {
    if((rear + 1) % SIZE == front) printf("Overflow\n");
    else {
        if(front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        cqueue[rear] = val;
    }
}
void dequeue() {
    if(front == -1) printf("Underflow\n");
    else if(front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
}
