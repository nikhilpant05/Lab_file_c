// By Shorya
#include <stdio.h>

long factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

long factorial_iterative(int n) {
    int i;
    long result;

    result = 1;

    for (i = 2; i <= n; i++) {
        result = result * i;
    }

    return result;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Recursive factorial = %ld\n", factorial_recursive(n));
    printf("Iterative factorial = %ld\n", factorial_iterative(n));

    return 0;
}
