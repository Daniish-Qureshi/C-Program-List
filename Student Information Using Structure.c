#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;
    printf("Enter name, roll, and marks:\n");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}
