int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder: ");
    inorder(root);
    printf("\n");

    printf("Preorder: ");
    preorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    printf("Height: %d\n", height(root));
    printf("Leaves: %d\n", countLeaves(root));
    printf("Non-leaves: %d\n", countNonLeaves(root));

    printf("Mirroring tree...\n");
    mirror(root);
    printf("Inorder after mirror: ");
    inorder(root);
    printf("\n");

    return 0;
}
