#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sort(char *str) {
    int i, j;
    for(i = 0; str[i]; i++) {
        for(j = i + 1; str[j]; j++) {
            if(str[i] > str[j]) {
                char t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Convert to lowercase and remove spaces
    int i, j = 0;
    for(i = 0; str1[i]; i++)
        if(str1[i] != ' ') str1[j++] = tolower(str1[i]);
    str1[j] = '\0';

    j = 0;
    for(i = 0; str2[i]; i++)
        if(str2[i] != ' ') str2[j++] = tolower(str2[i]);
    str2[j] = '\0';

    sort(str1);
    sort(str2);

    if(strcmp(str1, str2) == 0)
        printf("Anagram\n");
    else
        printf("Not an anagram\n");
}
