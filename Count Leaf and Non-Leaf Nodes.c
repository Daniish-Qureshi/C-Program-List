int countLeaves(struct Node* root) {
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}

int countNonLeaves(struct Node* root) {
    if(!root || (!root->left && !root->right)) return 0;
    return 1 + countNonLeaves(root->left) + countNonLeaves(root->right);
}
