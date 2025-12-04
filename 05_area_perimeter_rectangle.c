// By Shorya
#include <stdio.h>

int main() {
    // Calculating area and perimeter of rectangle
    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of rectangle is %.2f\n", area);
    printf("The perimeter of rectangle is %.2f", perimeter);

    return 0;
}
