//Addition Of Two Number
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, sum;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    getch();
    return 0;
}
