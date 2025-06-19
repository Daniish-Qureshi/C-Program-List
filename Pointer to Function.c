#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*funcPtr)(int, int) = add;
    printf("Sum = %d\n", funcPtr(3, 4));
}
