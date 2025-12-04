// By Shorya
#include <stdio.h>

int main() {
    int n;
    int i;
    int positive;
    int negative;
    int odd;
    int even;

    positive = 0;
    negative = 0;
    odd = 0;
    even = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0) {
            positive++;
        } else if (a[i] < 0) {
            negative++;
        }

        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Odd = %d\n", odd);
    printf("Even = %d\n", even);

    return 0;
}
