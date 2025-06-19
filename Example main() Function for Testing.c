int main() {
    insertAtBeginning(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtBeginning(5);

    displayForward();

    deleteByValue(20);
    displayForward();

    reverse();
    displayForward();

    return 0;
}
