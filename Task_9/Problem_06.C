
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list {
    Node *head;
    int size;
} List;

bool addToList(List *mylist, int data, int position) {
    if (position < 0 || position > mylist->size) return false;

    Node *ptr = (Node *)malloc(sizeof(Node));
    if (ptr == NULL) return false;
    ptr->data = data;

    if (position == 0) { // Insert at head
        if (mylist->head == NULL) {
            ptr->next = ptr; // points to itself
            mylist->head = ptr;
        } else {
            Node *last = mylist->head;
            while (last->next != mylist->head)
                last = last->next;
            ptr->next = mylist->head;
            mylist->head = ptr;
            last->next = ptr;
        }
    } else {
        Node *temp = mylist->head;
        for (int i = 1; i < position; i++)
            temp = temp->next;

        ptr->next = temp->next;
        temp->next = ptr;
    }

    mylist->size++;
    return true;
}

bool printList(List *mylist) {
    if (mylist->head == NULL) {
        printf("Empty List!\n");
        return false;
    }

    Node *temp = mylist->head;
    for (int i = 0; i < mylist->size; i++) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return true;
}

// Main
int main() {
    List mylist = {NULL, 0};

    addToList(&mylist, 10, 0);
    addToList(&mylist, 20, 1);
    addToList(&mylist, 30, 2);
    addToList(&mylist, 25, 2);
    addToList(&mylist, 5, 0);

    printList(&mylist);
    printf("Size of List: %d\n", mylist.size);

    return 0;
}
