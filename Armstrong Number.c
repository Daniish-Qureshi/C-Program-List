//Armstrong Number
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digit, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    int t = num;
    while(t != 0) {
        n++;
        t /= 10;
    }

    while(num != 0) {
        digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    if(sum == temp)
        printf("Armstrong number\n");
    else
        printf("Not Armstrong number\n");

    return 0;
}
