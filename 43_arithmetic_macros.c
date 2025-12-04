// By Shorya
#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? (a) / (b) : 0)

int main() {
    int a;
    int b;

    a = 10;
    b = 5;

    printf("Add = %d\n", ADD(a, b));
    printf("Sub = %d\n", SUB(a, b));
    printf("Mul = %d\n", MUL(a, b));
    printf("Div = %d\n", DIV(a, b));

    return 0;
}
