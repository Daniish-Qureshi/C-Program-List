#include <stdio.h>
int main() {
    int arr[100], freq[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(int i = 0; i < n; i++) {
        int count = 1;
        if(freq[i] != 0) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("Element Frequency:\n");
    for(int i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%d: %d\n", arr[i], freq[i]);
    }
}
