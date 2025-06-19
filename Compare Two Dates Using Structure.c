#include <stdio.h>
struct Date {
    int day, month, year;
};
int compare(struct Date d1, struct Date d2) {
    if(d1.year != d2.year)
        return (d1.year > d2.year);
    if(d1.month != d2.month)
        return (d1.month > d2.month);
    return (d1.day > d2.day);
}
int main() {
    struct Date d1 = {12, 5, 2023}, d2 = {15, 6, 2022};
    if(compare(d1, d2))
        printf("Date 1 is later.\n");
    else
        printf("Date 2 is later.\n");
}
