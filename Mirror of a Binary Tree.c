void mirror(struct Node* root) {
    if(root) {
        mirror(root->left);
        mirror(root->right);
        struct Node* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
