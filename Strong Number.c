// Strong Number
#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while(num != 0) {
        sum += factorial(num % 10);
        num /= 10;
    }

    if(sum == temp)
        printf("Strong number\n");
    else
        printf("Not Strong number\n");

    return 0;
}
