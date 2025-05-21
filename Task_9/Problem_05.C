/*
Write your first Doubly linked list and insert a Node at beginning.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct dnode {
    int data;
    struct dnode *prev;
    struct dnode *next;
} DNode;

typedef struct dlist {
    DNode *head;
    int size;
} DList;

bool addToHead(DList *mylist, int data) {
    DNode *ptr = (DNode *)malloc(sizeof(DNode));
    if (ptr == NULL) return false;

    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = mylist->head;

    xor

    mylist->head = ptr;
    mylist->size++;
    return true;
}

bool printList(DList *mylist) {
    if (mylist->head == NULL) {
        printf("Empty List!\n");
        return false;
    }

    DNode *temp = mylist->head;
    for (int i = 0; i < mylist->size; i++) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return true;
}

int main() {
    DList mylist = {NULL, 0};

    for (int i = 0; i < 5; i++) {
        addToHead(&mylist, i);
    }

    printList(&mylist);
    printf("Size of List: %d\n", mylist.size);

    return 0;
}
