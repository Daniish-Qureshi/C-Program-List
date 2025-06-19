#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input: size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Output: original array
    printf("\nOriginal array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Output: reversed array
    printf("\n\nReversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
