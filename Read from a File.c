#include <stdio.h>
int main() {
    char ch;
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL) {
        printf("File not found.\n");
        return 1;
    }
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}
