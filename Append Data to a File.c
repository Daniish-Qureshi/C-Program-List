#include <stdio.h>
int main() {
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL) {
        printf("File can't be opened.\n");
        return 1;
    }
    fprintf(fp, "This line is appended.\n");
    fclose(fp);
    printf("Data appended successfully.\n");
}
