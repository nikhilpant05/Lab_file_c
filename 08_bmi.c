// By Shorya
#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 15.0f) {
        printf("Starvation");
    } else if (bmi <= 17.5f) {
        printf("Anorexic");
    } else if (bmi <= 18.5f) {
        printf("Underweight");
    } else if (bmi <= 24.9f) {
        printf("Ideal");
    } else if (bmi <= 29.9f) {
        printf("Overweight");
    } else if (bmi <= 39.9f) {
        printf("Obese");
    } else {
        printf("Morbidly Obese");
    }

    return 0;
}
