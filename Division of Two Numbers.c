//Division of Two Numbers
#include <stdio.h>
#include <conio.h>
int main() {
    float a, b, result;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b != 0) {
        result = a / b;
        printf("Quotient = %.2f\n", result);
    } else {
        printf("Error: Cannot divide by zero.\n");
    }
    getch();
    
    return 0;
}
