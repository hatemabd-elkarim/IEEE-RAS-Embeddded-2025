/*
-Write a C program to input elements in an array and sort the array using pointers.

Input:
Array elements: 10 -1 0 4 2 100 15 20 24 -5

Output:
Array in ascending order: -5, -1, 0, 2, 4, 10, 15, 20, 24, 100,
Array in descending order: 100, 24, 20, 15, 10, 4, 2, 0, -1, -5,
*/
#include <stdio.h>

void ascending(int *ptr);
void descending(int *ptr);
void swap (int *a, int *b);
#define MAX_SIZE 10
int main(){
    int arr[10], *ptr = arr;
    printf("Array Elements: ");
    for(int i = 0; i < MAX_SIZE; i++) scanf("%d, ", ptr+i);
    ascending(ptr);
    printf("Array in ascending order: ");
    for(int i = 0; i < MAX_SIZE; i++) printf("%d, ", *(ptr+i));
    printf("\nArray in descending order: ");
    descending(ptr);
    for(int i = 0; i < MAX_SIZE; i++) printf("%d, ", *(ptr+i));
    
}
void ascending(int *ptr)
{
    // bubble sort algorithm
    bool swapped;
    for(int i = 0; i < MAX_SIZE; i++){
        swapped = false;
        for (int j = 0; j < MAX_SIZE - i; j++){
            if (ptr[j] > ptr[j+1]) swap(ptr+j,ptr+j+1);
            swapped = true;
        }
        if (!swapped) break;
    }
}

void descending(int *ptr)
{
    // this implementation depends on that the array is in ascending order
    for (int i = 0; i < MAX_SIZE / 2; i++) swap(ptr+i, ptr+(MAX_SIZE - i - 1));
}

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
