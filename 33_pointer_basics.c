// By Shorya
#include <stdio.h>

int main() {
    int x;
    int *p;

    x = 10;
    p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", (void *) &x);
    printf("Pointer p = %p\n", (void *) p);
    printf("Value pointed by p = %d\n", *p);

    return 0;
}
