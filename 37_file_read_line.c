// By Shorya
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
