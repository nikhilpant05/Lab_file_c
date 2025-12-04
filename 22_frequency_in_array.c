// By Shorya
#include <stdio.h>

int main() {
    int n;
    int i;
    int key;
    int count;

    count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to find frequency: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d is %d", key, count);

    return 0;
}
