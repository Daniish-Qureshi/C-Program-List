struct ChainNode {
    int data;
    struct ChainNode* next;
};

struct ChainNode* chain[SIZE];

void insertChaining(int key) {
    int index = hashFunction(key);
    struct ChainNode* newNode = malloc(sizeof(struct ChainNode));
    newNode->data = key;
    newNode->next = chain[index];
    chain[index] = newNode;
}

void displayChaining() {
    for(int i = 0; i < SIZE; i++) {
        printf("[%d]:", i);
        struct ChainNode* temp = chain[i];
        while(temp) {
            printf(" %d →", temp->data);
            temp = temp->next;
        }
        printf(" NULL\n");
    }
}
