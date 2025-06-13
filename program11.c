//Simple Calculator using switch
#include <stdio.h>
#include <conio,h>
int main() {
    char op;
    float a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/': 
            if(b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
