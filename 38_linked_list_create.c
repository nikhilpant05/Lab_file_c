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
    struct Node *third;
    struct Node *temp;

    head = createNode(10);
    second = createNode(20);
    third = createNode(30);

    head->next = second;
    second->next = third;

    temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
