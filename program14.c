//Count Total Digits in a Number
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        count++;
        num /= 10;
    } while(num != 0);

    printf("Total digits: %d\n", count);
    return 0;
}
