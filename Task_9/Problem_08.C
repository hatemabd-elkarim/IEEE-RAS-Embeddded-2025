/*
Problem 8:
Swap the Two Top elements.print the before and after swap.
*/

#include <stdio.h>

#define ST_SIZE 10
typedef struct mystack{
    int ST_elements[ST_SIZE];
    int ST_top;
}mystack;

bool push (mystack *ptr, int data){
    if (ptr->ST_top == ST_SIZE-1){
        printf("Stack overflow\n");
        return false;
    }else{
        (ptr->ST_top)++;
        (ptr->ST_elements)[ptr->ST_top] = data;
    }
    return true;
}

bool pop (mystack *ptr, int *data){
    if (ptr->ST_top == -1){
        printf("Empty Stack\n");
        return false;
    }else{
        *data = ptr->ST_elements[ptr->ST_top]; // Correctly get the value
        ptr->ST_elements[ptr->ST_top] = 0;      // Optional: Clear the value
        (ptr->ST_top)--;
    }
    return true;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    mystack st1; st1.ST_top = -1;
    int data;
    for (int i = 10; i <= 30; i+=10) push(&st1,i);
    printf("Before swap: %d %d\n", st1.ST_elements[st1.ST_top], st1.ST_elements[st1.ST_top - 1]);
    swap(&st1.ST_elements[st1.ST_top], &st1.ST_elements[st1.ST_top - 1]);
    printf("After swap: %d %d\n", st1.ST_elements[st1.ST_top], st1.ST_elements[st1.ST_top - 1]);
}