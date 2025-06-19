#include <stdio.h>
int main() {
    char str[100];
    int v = 0, c = 0;
    printf("Enter a string: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if((ch >= 'a' && ch <= 'z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
}
