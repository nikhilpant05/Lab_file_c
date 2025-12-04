// By Shorya
#include <stdio.h>

union Address {
    char full[100];
};

int main() {
    union Address a;

    printf("Enter present address (single word or no spaces): ");
    scanf("%99s", a.full);

    printf("Present address: %s", a.full);

    return 0;
}
