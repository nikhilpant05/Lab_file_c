// By Shorya
#include <stdio.h>

int globalVar = 10;

void showGlobal() {
    printf("Inside function, globalVar = %d\n", globalVar);
}

int main() {
    int localVar;

    localVar = 5;

    showGlobal();
    printf("Inside main, localVar = %d\n", localVar);

    return 0;
}
