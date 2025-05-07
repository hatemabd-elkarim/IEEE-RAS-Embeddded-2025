/*
-Create a C program that contains 3 different allocated memory spaces using (malloc, calloc) 
and reallocate one of them to a different space using (realloc) for each allocation to indicate if it was allocated successfully or not 
and then comment and print the values that were assigned to these memory blocks. "Don't forget to free your memory when you finish "
*/
#include <stdio.h>
#include <stdlib.h>

void initialize(int *ptr, int base, int size);
void print(int *ptr, int size);
int main(){
    int size, newSize;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *ptr = (int *) malloc(size * sizeof(int)); // allocate space with garbage values
    if (ptr == NULL) {
        printf("Can't allocate space");
        return 1;
    }
    printf("Allocation with malloc needs initialization, Please enter the elements: ");
    initialize(ptr, 0, size);
    printf("You entered: ");
    print(ptr,size);

    int *arr = (int *) calloc(size, sizeof(int)); // allocate array of (Size) integers each is initialized to 0
    if (arr == NULL){
        printf("Can't allocate space");
        free(ptr);
        return 1;
    }
    printf("Allocation with calloc doesn't need initialization: ");
    print(arr,size);

    printf("Enter new size: ");
    scanf("%d", &newSize);
    int *resized = (int *) realloc(ptr, newSize * sizeof(int));
    if (resized == NULL){
        printf("Can't allocate space");
        free(ptr);
        free(arr);
        return 1;
    }

    if (newSize > size){

    printf("Please initialize the new added elements: ");
    initialize(resized, size, newSize);
    }

    printf("The new allocated elements are: ");
    print(resized, newSize);
    // free(ptr); no need to free ptr becuase it is the same as resized
    free(arr); arr = NULL;
    free(resized); resized = NULL;

}

void initialize(int *ptr, int base, int size){
    for (int i = base; i < size; i++){
        scanf("%d", ptr+i);
    }
}
void print(int *ptr, int size){
    for (int i = 0; i < size; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");

}