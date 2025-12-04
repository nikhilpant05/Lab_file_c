// By Shorya
#include <stdio.h>

int main() {
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int area2;

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);

    area2 = x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2);

    if (area2 == 0) {
        printf("Points are collinear");
    } else {
        printf("Points are not collinear");
    }

    return 0;
}
