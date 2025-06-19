#include <stdio.h>
int main() {
    int a = 20;
    int *p = &a;
    int **pp = &p;
    printf("Value = %d\n", **pp);
}
