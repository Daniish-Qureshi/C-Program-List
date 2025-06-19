#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i]; i++) {
        for(j = i + 1; str[j]; ) {
            if(str[i] == str[j]) {
                for(k = j; str[k]; k++)
                    str[k] = str[k + 1];
            } else {
                j++;
            }
        }
    }
    printf("After removing duplicates: %s\n", str);
}
