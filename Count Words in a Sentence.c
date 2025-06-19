#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int count = 1;
    printf("Enter a sentence: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }
    printf("Word count = %d\n", count);
}
