#include <stdio.h>
int main() {
    FILE *fp = fopen("data.txt", "w");
    if(fp == NULL) {
        printf("File can't be opened\n");
        return 1;
    }
    fprintf(fp, "Hello, this is written to the file.\n");
    fclose(fp);
    printf("Data written successfully.\n");
}
