#define SIZE 10
int hashTable[SIZE];

int hash(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hash(key);
    while(hashTable[index] != 0)
        index = (index + 1) % SIZE;
    hashTable[index] = key;
}
