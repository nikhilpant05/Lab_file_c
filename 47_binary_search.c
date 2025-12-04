// By Shorya
#include <stdio.h>

int main() {
    int n;
    int i;
    int key;
    int low;
    int high;
    int mid;
    int found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            found = 1;
            break;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == 1) {
        printf("Element found at index %d", mid);
    } else {
        printf("Element not found");
    }

    return 0;
}
