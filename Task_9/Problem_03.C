/*
Write a function to return a certain node value.You are done now insert a node in this position 😂.
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

bool addToList(List *mylist, int data, int position){
    if (position == 0){
        addToHead(mylist, data);
        return true;
    }

    Node *temp = mylist->head;
    Node *ptr = (Node *) malloc(sizeof(Node));  if (ptr == NULL) return false;
    for (int i = 1; i < position; i++){
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    ptr->data = data;
    mylist->size++;
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

bool printNode(List *myList, int position){
    Node *temp = myList->head; if (temp == NULL) return false;
    for (int i = 0; i < position; i++){
        temp = temp->next;
    }
    printf("Data of node no.%d is %d\n", position, temp->data);
}

int main(){
    List mylist = {NULL,0};
    for (int i = 0; i < 5; i++){
        addToList(&mylist,i,i);
    }
    printList(&mylist);
    printNode(&mylist,1);
    addToList(&mylist,6,1);
    printList(&mylist);
    printNode(&mylist,1);

}