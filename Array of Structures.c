#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter name, roll, and marks for student %d:\n", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("\nStudent Records:\n");
    for(int i = 0; i < 3; i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
}
