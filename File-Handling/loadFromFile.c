#include <stdio.h>

int main() {
    FILE *fp = fopen("File1.txt", "r");
    char line[100];
    char line2[100];
    char ch;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while((fscanf(fp, "%s", line)) == 1)  
    printf("%s", line);

    fclose(fp);
    return 0;
}

