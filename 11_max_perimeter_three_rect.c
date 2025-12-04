// By Shorya
#include <stdio.h>

int main() {
    float length;
    float breadth;
    float perimeter;
    float maxPerimeter;
    int i;

    maxPerimeter = 0.0f;

    printf("Enter length and breadth of 3 rectangles:\n");

    for (i = 0; i < 3; i++) {
        scanf("%f %f", &length, &breadth);
        perimeter = 2 * (length + breadth);

        if (perimeter > maxPerimeter) {
            maxPerimeter = perimeter;
        }
    }

    printf("Maximum perimeter is %.2f", maxPerimeter);

    return 0;
}
