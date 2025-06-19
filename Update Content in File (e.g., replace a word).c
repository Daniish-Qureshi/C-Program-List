#include <stdio.h>
#include <string.h>
int main() {
    char temp[1000], word[50], newWord[50];
    FILE *fp = fopen("data.txt", "r");
    FILE *ftemp = fopen("temp.txt", "w");

    if(fp == NULL || ftemp == NULL) {
        printf("File error.\n");
        return 1;
    }

    printf("Enter word to replace: ");
    scanf("%s", word);
    printf("Enter new word: ");
    scanf("%s", newWord);

    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(temp, word) == 0)
            fprintf(ftemp, "%s ", newWord);
        else
            fprintf(ftemp, "%s ", temp);
    }

    fclose(fp);
    fclose(ftemp);

    remove("data.txt");
    rename("temp.txt", "data.txt");

    printf("Word replaced successfully.\n");
}
