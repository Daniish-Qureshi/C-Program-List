#include <stdio.h>
#define SIZE 100

int arr[SIZE], n = 0;

void display() {
    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insert(int val) {
    if(n < SIZE) {
        arr[n++] = val;
        printf("Inserted %d\n", val);
    } else {
        printf("Array is full\n");
    }
}

void deleteAtIndex(int index) {
    if(index >= 0 && index < n) {
        for(int i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
        printf("Deleted element at index %d\n", index);
    } else {
        printf("Invalid index\n");
    }
}

int search(int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    deleteAtIndex(1);
    display();

    int index = search(30);
    if(index != -1) printf("Found at index %d\n", index);
    else printf("Not found\n");

    return 0;
}
