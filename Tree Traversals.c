void inorder(struct Node* root) {
    if(root) { inorder(root->left); printf("%d ", root->data); inorder(root->right); }
}
void preorder(struct Node* root) {
    if(root) { printf("%d ", root->data); preorder(root->left); preorder(root->right); }
}
void postorder(struct Node* root) {
    if(root) { postorder(root->left); postorder(root->right); printf("%d ", root->data); }
}
