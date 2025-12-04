// By Shorya
#include <stdio.h>

int main() {
    int a;
    int s;
    int leftResult;
    int rightResult;

    a = 5;

    printf("Enter shift count: ");
    scanf("%d", &s);

    leftResult = a << s;
    rightResult = a >> s;

    printf("The left shift operator of a = %d\n", leftResult);
    printf("The right shift operator of a = %d\n", rightResult);

    return 0;
}
