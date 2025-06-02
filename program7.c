//C Program: Check Even or Odd
#include <stdio.h>
#include <conio.h>
int main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
        getch();
    return 0;
}
