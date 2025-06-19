#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
}
