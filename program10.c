//C Program: Greatest Among 3 Numbers
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("%d is the greatest\n", a);
    else if (b >= a && b >= c)
        printf("%d is the greatest\n", b);
    else
        printf("%d is the greatest\n", c);
        getch();
        
    return 0;
}
