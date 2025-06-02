//Swap Using a Temporary Variable
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    getch();
    return 0;
}



//Swap Without Using a Temporary Variable
#include <stdio.h>
#include <conio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without temp
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    getch();
    return 0;
}
