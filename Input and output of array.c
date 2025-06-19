#include <stdio.h>

int main() {
    int arr[100]; // Array declaration
    int n, i;

    // Input: size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: elements of array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Output: displaying array elements
    printf("\nThe elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
