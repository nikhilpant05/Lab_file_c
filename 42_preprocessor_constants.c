// By Shorya
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

int main() {
    int n;

    n = 5;

    printf("PI = %.5f\n", PI);
    printf("Square of %d = %d\n", n, SQUARE(n));

    return 0;
}
