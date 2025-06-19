#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    hashTable[index] = key;
}

void displayHashTable() {
    for(int i = 0; i < SIZE; i++)
        printf("[%d]: %d\n", i, hashTable[i]);
}
