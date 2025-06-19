#include <stdio.h>
int main() {
    char *fruits[] = {"Apple", "Banana", "Mango"};
    for(int i = 0; i < 3; i++)
        printf("%s\n", fruits[i]);
}
