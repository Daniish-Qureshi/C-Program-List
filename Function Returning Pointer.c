#include <stdio.h>
int* getMax(int *a, int *b) {
    return (*a > *b) ? a : b;
}
int main() {
    int x = 10, y = 20;
    int *max = getMax(&x, &y);
    printf("Max value = %d\n", *max);
}
