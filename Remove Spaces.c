#include <stdio.h>
int main() {
    char str[100], noSpace[100];
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            noSpace[j++] = str[i];
    }
    noSpace[j] = '\0';
    printf("String without spaces: %s\n", noSpace);
}
