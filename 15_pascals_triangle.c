// By Shorya
#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    int c[10][10];

    n = 5;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        c[i][0] = 1;
        c[i][i] = 1;

        for (j = 1; j < i; j++) {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
