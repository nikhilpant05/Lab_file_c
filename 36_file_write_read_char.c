// By Shorya
#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Cannot create file");
        return 1;
    }

    fprintf(fp, "Hello File\nThis is sample.\n");

    fclose(fp);

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
