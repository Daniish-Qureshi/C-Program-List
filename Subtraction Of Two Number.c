//Subtraction Of Two Number
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, sub;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sub = a-b;
    printf("Sub = %d\n", sub);
    getch();
    return 0;
}

