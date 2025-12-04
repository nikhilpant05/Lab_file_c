// By Shorya
#include <stdio.h>

void show() {
    static int count = 0;

    count = count + 1;

    printf("Count = %d\n", count);
}

int main() {
    int i;

    for (i = 0; i < 3; i++) {
        show();
    }

    return 0;
}
