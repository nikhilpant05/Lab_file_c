// By Shorya
#include <stdio.h>

int main() {
    int num;
    int positive;
    int negative;
    int zero;
    int choice;

    positive = 0;
    negative = 0;
    zero = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }

        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
