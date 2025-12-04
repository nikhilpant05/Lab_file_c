// By Shorya
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("Book ID = %d\n", b.id);
    printf("Title = %s\n", b.title);
    printf("Author = %s\n", b.author);
    printf("Price = %.2f\n", b.price);
}

int main() {
    struct Book b;

    printf("Enter id, title, author, price: ");
    scanf("%d %49s %49s %f", &b.id, b.title, b.author, &b.price);

    printBook(b);

    return 0;
}
