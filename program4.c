//Multiplication of Two Numbers
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, product;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("Product = %d\n", product);
    getch();
    return 0;
}
