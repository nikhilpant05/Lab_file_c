// By Shorya
#include <stdio.h>

int main() {
    float celsius;
    float fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    printf("The temperature in Fahrenheit is %.2f", fahrenheit);

    return 0;
}
