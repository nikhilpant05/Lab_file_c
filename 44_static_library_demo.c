
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x;
    int y;
    int s;

    x = 3;
    y = 4;

    s = add(x, y);

    printf("Sum = %d\n", s);

    return 0;
}
