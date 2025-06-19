#include <stdio.h>
int main() {
    char ch;
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("copy.txt", "w");

    if(src == NULL || dest == NULL) {
        printf("File error.\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("Content copied.\n");
}
