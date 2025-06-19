#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Loop to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Output: max and min
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
