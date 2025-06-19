#include <stdio.h>
struct Rectangle {
    int length, width;
};
int area(struct Rectangle r) {
    return r.length * r.width;
}
int main() {
    struct Rectangle rect = {10, 5};
    printf("Area = %d\n", area(rect));
}
