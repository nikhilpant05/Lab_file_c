// By Shorya
#include <stdio.h>

int main() {
    double population;
    int year;

    population = 100000.0;

    for (year = 1; year <= 10; year++) {
        population = population * 1.10;
        printf("Year %d : Population = %.0f\n", year, population);
    }

    return 0;
}
