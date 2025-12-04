// By Shorya
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p;

    p = a;

    printf("First element = %d\n", *p);

    p++;

    printf("Second element = %d\n", *p);

    return 0;
}
