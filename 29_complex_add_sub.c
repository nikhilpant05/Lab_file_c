// By Shorya
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex a;
    struct Complex b;
    struct Complex s;
    struct Complex d;

    printf("Enter first complex (real imag): ");
    scanf("%f %f", &a.real, &a.imag);

    printf("Enter second complex (real imag): ");
    scanf("%f %f", &b.real, &b.imag);

    s = add(a, b);
    d = sub(a, b);

    printf("Sum = %.2f + %.2fi\n", s.real, s.imag);
    printf("Difference = %.2f + %.2fi\n", d.real, d.imag);

    return 0;
}
