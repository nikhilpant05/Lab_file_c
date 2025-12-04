// By Shorya
#include <stdio.h>

int main() {
    int rows;
    int i;
    int j;
    int value;

    rows = 3;
    value = 1;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", value);
            value++;
        }
        printf("\n");
    }

    return 0;
}
