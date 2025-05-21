/*
-Create your first train AKA linked list and print all the list with the length 🙂.
I am sorry create a function prints the list and the length :).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list{
    node *head;
    int size;
}List;

bool addToHead (list *mylist, int data){
    Node *ptr = (node *) malloc(sizeof(node));
    if (ptr == NULL) return false;
    ptr->data = data;
    ptr->next = mylist->head;
    mylist->head = ptr; 
    mylist->size ++;
    return true;
}

bool printList(list *myList){
    if (myList->head == NULL){
        printf("Empty List!\n");
        return false;
    }
    Node *temp = myList->head;
    for (int i = 0; i < myList->size; i++){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return true;
}

int main(){
    List mylist = {NULL,0};
    for (int i = 0; i < 5; i++){
        addToHead(&mylist,i);
    }
    printList(&mylist);
    printf("Size of List: %d", mylist.size);
}