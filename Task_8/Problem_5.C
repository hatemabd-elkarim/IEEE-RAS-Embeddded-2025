/*
-Ask the user for a number n, then dynamically allocate an array of n integers. 
Let the user fill it and then print the sum of all elements.
• Hint: Use malloc and free.
*/

#include <stdio.h>
#include <stdlib.h>

void initialize(int *ptr, int base, int size);
int calculateSum(int *ptr, int size);
    int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = (int *) malloc(n * sizeof(int)); // allocate space with garbage values
    if (ptr == NULL) {
        printf("Can't allocate space");
        return 1;
    }
    printf("Please enter the elements: ");
    initialize(ptr, 0, n);
    printf("You entered: ");
    printf("Sum of elements = %d", calculateSum(ptr,n));

    free(ptr);
    ptr = NULL;
    
}

void initialize(int *ptr, int base, int size){
    for (int i = base; i < size; i++){
        scanf("%d", ptr+i);
    }
}

int calculateSum(int *ptr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += ptr[i];
    }
    return sum;
}