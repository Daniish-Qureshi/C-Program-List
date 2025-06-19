#include <stdio.h>
struct Date {
    int day, month, year;
};
struct Student {
    char name[50];
    struct Date dob;
};
int main() {
    struct Student s = {"Danish", {15, 8, 2003}};
    printf("Name: %s\nDOB: %02d-%02d-%04d\n", s.name, s.dob.day, s.dob.month, s.dob.year);
}
