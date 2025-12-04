// By Shorya
#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x;
    int y;

    x = 5;
    y = 7;

    printf("Before swap: x = %d y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d y = %d\n", x, y);

    return 0;
}
