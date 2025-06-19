// Left Rotate by 1 position
#include <stdio.h>
int main() {
    int arr[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    temp = arr[0];
    for(int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = temp;

    printf("Left rotated array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


// Right Rotate by 1 position
#include <stdio.h>
int main() {
    int arr[100], n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    temp = arr[n - 1];
    for(int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;

    printf("Right rotated array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
