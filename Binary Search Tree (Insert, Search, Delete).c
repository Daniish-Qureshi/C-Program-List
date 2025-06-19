struct Node* insert(struct Node* root, int val) {
    if(!root) return create(val);
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int search(struct Node* root, int key) {
    if(!root) return 0;
    if(root->data == key) return 1;
    return key < root->data ? search(root->left, key) : search(root->right, key);
}

// Find minimum node in right subtree
struct Node* findMin(struct Node* root) {
    while(root->left) root = root->left;
    return root;
}

// Delete a node
struct Node* delete(struct Node* root, int key) {
    if(!root) return NULL;
    if(key < root->data) root->left = delete(root->left, key);
    else if(key > root->data) root->right = delete(root->right, key);
    else {
        if(!root->left) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        if(!root->right) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}
