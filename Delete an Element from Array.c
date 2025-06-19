#include <stdio.h>
int main() {
    int arr[100], n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i+1];
    n--;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
