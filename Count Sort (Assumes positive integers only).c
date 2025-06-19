#include <stdio.h>
int main() {
    int arr[100], output[100], count[100] = {0}, n, max = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements (positive integers):\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i < n; i++) count[arr[i]]++;
    for(int i = 1; i <= max; i++) count[i] += count[i-1];
    for(int i = n - 1; i >= 0; i--) output[--count[arr[i]]] = arr[i];

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) printf("%d ", output[i]);
}
