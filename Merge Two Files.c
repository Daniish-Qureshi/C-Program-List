#include <stdio.h>
int main() {
    char ch;
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *fout = fopen("merged.txt", "w");

    if(f1 == NULL || f2 == NULL || fout == NULL) {
        printf("File error.\n");
        return 1;
    }

    while((ch = fgetc(f1)) != EOF) fputc(ch, fout);
    while((ch = fgetc(f2)) != EOF) fputc(ch, fout);

    fclose(f1); fclose(f2); fclose(fout);
    printf("Files merged successfully.\n");
}
