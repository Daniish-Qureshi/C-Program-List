#include <stdio.h>
struct Complex {
    float real, imag;
};
int main() {
    struct Complex a = {2.5, 3.2}, b = {1.5, 4.8}, sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
}
