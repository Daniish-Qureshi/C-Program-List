#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e = {101, "Arjun", 45000.50};
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
}
