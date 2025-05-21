/*
-Create a function to insert a node at the end .
- a function to insert a node at the beginning Same.
Same Damn thing as the end but if I told you that it is not Noopie :).
- a function to delete a specific node in your list.
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

bool addToEnd (list *myList, int data){
    Node *ptr = (node *) malloc(sizeof(node));
    if (ptr == NULL) return false;
    ptr->data = data;
    ptr->next = NULL;
    if (myList->head == NULL){
        myList->head = ptr; 
        myList->size ++;
        return true;
    }
    Node *temp = myList->head;
    for (int i = 0; i < myList->size; i++){
        if (temp-> next == NULL) temp->next = ptr;
        else temp = temp->next;
    }
    
    myList->size++;
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
        addToEnd(&mylist,i);
    }
    printList(&mylist);
    printf("Size of List: %d", mylist.size);
}