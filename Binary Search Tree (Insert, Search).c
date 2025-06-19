struct Node { int data; struct Node *left, *right; };
struct Node* insert(struct Node* root, int val) {
    if(!root) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = val; newNode->left = newNode->right = NULL;
        return newNode;
    }
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}
int search(struct Node* root, int key) {
    if(!root) return 0;
    if(root->data == key) return 1;
    return key < root->data ? search(root->left, key) : search(root->right, key);
}
