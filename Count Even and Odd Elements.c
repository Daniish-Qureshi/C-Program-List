#include <stdio.h>
int main() {
    int arr[100], n, even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements: %d\nOdd elements: %d\n", even, odd);
}
