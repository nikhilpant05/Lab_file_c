// By Shorya
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Triangle is valid\n");

        if (a == b && b == c) {
            printf("Equilateral Triangle");
        } else if (a == b || b == c || c == a) {
            printf("Isosceles Triangle");
        } else if (a * a + b * b == c * c ||
                   b * b + c * c == a * a ||
                   c * c + a * a == b * b) {
            printf("Right Angled Triangle");
        } else {
            printf("Scalene Triangle");
        }
    } else {
        printf("Triangle is NOT valid");
    }

    return 0;
}
