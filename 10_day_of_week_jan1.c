// By Shorya
#include <stdio.h>

int main() {
    int year;
    int y;
    int day;
    const char *names[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    y = year - 1;

    day = (1 + y + y / 4 - y / 100 + y / 400) % 7;

    printf("1 Jan %d is %s", year, names[day]);

    return 0;
}
