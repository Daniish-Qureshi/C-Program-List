#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;
    float average;

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    // Calculate average
    average = (float)sum / n;

    // Output: sum and average
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
