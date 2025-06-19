#include <stdio.h>
#include <string.h>
int main() {
    char word[50], temp[1000], ch;
    FILE *fp = fopen("data.txt", "r");
    FILE *ftemp = fopen("temp.txt", "w");

    if(fp == NULL || ftemp == NULL) {
        printf("File error.\n");
        return 1;
    }

    printf("Enter word to delete: ");
    scanf("%s", word);

    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(temp, word) != 0)
            fprintf(ftemp, "%s ", temp);
    }

    fclose(fp);
    fclose(ftemp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Word deleted (if present).\n");
}
