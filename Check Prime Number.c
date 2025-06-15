//Check Prime Number
#include <stdio.h>

int main() {
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 2) isPrime = 0;
    for(int i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Prime number\n");
    else
        printf("Not Prime number\n");

    return 0;
}
