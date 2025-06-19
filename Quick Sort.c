#include <stdio.h>
void quickSort(int a[], int low, int high) {
    if(low < high) {
        int i = low, j = high, pivot = a[low];
        while(i < j) {
            while(a[i] <= pivot && i < high) i++;
            while(a[j] > pivot) j--;
            if(i < j) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
        a[low] = a[j]; a[j] = pivot;
        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
}
