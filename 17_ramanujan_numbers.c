// By Shorya
#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main() {
    int limit;
    int a;
    int b;
    int c;
    int d;
    int sum1;
    int sum2;

    printf("Enter limit: ");
    scanf("%d", &limit);

    for (a = 1; cube(a) <= limit; a++) {
        for (b = a; cube(a) + cube(b) <= limit; b++) {
            for (c = a; cube(c) <= limit; c++) {
                for (d = c; cube(c) + cube(d) <= limit; d++) {
                    if (a == c && b == d) {
                        continue;
                    }

                    sum1 = cube(a) + cube(b);
                    sum2 = cube(c) + cube(d);

                    if (sum1 == sum2 && sum1 <= limit) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
