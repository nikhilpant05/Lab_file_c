// By Shorya
#include <stdio.h>

int main() {
    FILE *fp;
    int lines;
    int words;
    int chars;
    int c;
    int inWord;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file");
        return 1;
    }

    lines = 0;
    words = 0;
    chars = 0;
    inWord = 0;

    while ((c = fgetc(fp)) != EOF) {
        chars++;

        if (c == '\n') {
            lines++;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Lines = %d\n", lines);
    printf("Words = %d\n", words);
    printf("Characters = %d\n", chars);

    return 0;
}
