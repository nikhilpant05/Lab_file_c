// By Shorya
#include <stdio.h>
#include <string.h>

void reverse(char s[]) {
    int i;
    int j;
    char temp;

    i = 0;
    j = strlen(s) - 1;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverse(str);

    printf("Reversed string: %s", str);

    return 0;
}
