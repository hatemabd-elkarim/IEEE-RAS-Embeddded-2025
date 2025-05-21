/*
Write a function to Free the Train or erase it from your memory.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list{
    Node *head;
    int size;
}List;

bool addToHead (List *mylist, int data){
    Node *ptr = (Node *) malloc(sizeof(Node));
    if (ptr == NULL) return false;
    ptr->data = data;
    ptr->next = mylist->head;
    mylist->head = ptr; 
    mylist->size ++;
    return true;
}

bool printList(List *myList){
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

bool deleteFromHead(List *myList){
    Node *temp = (Node *) myList->head; if (temp  == NULL) return false;
    myList->head = myList->head->next;
    free (temp);
    return true;
}
void deleteMyList(List *myList){
    while (deleteFromHead(myList));
}
int main(){
    List mylist = {NULL,0};
    for (int i = 0; i < 5; i++){
        addToHead(&mylist,i);
    }
    printList(&mylist);
    deleteMyList(&mylist);
    printList(&mylist);
}