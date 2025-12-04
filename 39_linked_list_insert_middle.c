// By Shorya
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int value) {
    struct Node *n;

    n = (struct Node *) malloc(sizeof(struct Node));
    n->data = value;
    n->next = NULL;

    return n;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *middle;
    struct Node *temp;

    head = createNode(1);
    second = createNode(3);

    head->next = second;

    middle = createNode(2);
    middle->next = second;
    head->next = middle;

    temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
