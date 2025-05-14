/*
-Create a queue and enqueue the values A, B, and C (in that order). Then dequeue one value and print it. What is the value printed?
*/

#include <stdio.h>

#define Q_SIZE 10
typedef struct myqueue {
    char Q_elements[Q_SIZE];
    int rear;
    int front;
} myqueue;

bool enqueue (myqueue *ptr, char data){
    if (ptr->rear == Q_SIZE-1) 
    {
        printf("Queue Full Error!");
        return false;
    }
    else if (ptr->rear == -1)
    {
        ptr->rear++;
        ptr->front++;
        ptr->Q_elements[ptr->rear] = data; 
    }
    else 
    {
        ptr->rear++;
        ptr->Q_elements[ptr->rear] = data; 
    }
    return true;
}

bool dequeue (myqueue *ptr, char *data){
    if (ptr->rear == -1)
    {
        printf("Queue Empty Error!");
        return false;
    }
    else if (ptr->rear == ptr->front)
    {
        *data = ptr->Q_elements[ptr->front];
        ptr->Q_elements[ptr->front] = '\0';
        ptr->front = -1;
        ptr->rear = -1;
    }
    else
    {
        *data = ptr->Q_elements[ptr->front];
        ptr->Q_elements[ptr->front] = '\0';
        ptr->front++;
    }
    return true;
}

    int main(){
        myqueue q1;
        q1.rear = -1; q1.front = -1;
        char data;
        for (char i = 'A'; i <= 'C'; i++) enqueue(&q1,i);
        dequeue(&q1,&data);
        printf("%c", data);
    }
