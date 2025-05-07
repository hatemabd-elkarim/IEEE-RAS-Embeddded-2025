/*
-Edit the previous program and instead of reallocating one of the memory spaces just free it and allocate a fourth space 
with a relatively bigger space then comment on what this would do if you had a limited memory space.

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

    free(ptr);
    ptr = NULL;
    
    printf("Try a larger number: ");
    scanf("%d", &newSize);
    int *newptr = (int *) malloc(newSize * sizeof(int));
    if (newptr == NULL){
        printf("Allocation failed, there is no enough space!");
        return 1;
    }
    printf("Allocation Succeeded");
    free (newptr);
    newptr = NULL;
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