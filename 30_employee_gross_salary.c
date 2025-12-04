// By Shorya
#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
};

int main() {
    struct Employee e;
    float da;
    float gross;

    printf("Enter employee name: ");
    scanf("%49s", e.name);

    printf("Enter basic salary: ");
    scanf("%f", &e.basic);

    da = 0.52f * e.basic;
    gross = e.basic + da;

    printf("Name = %s\n", e.name);
    printf("Gross salary = %.2f\n", gross);

    return 0;
}
