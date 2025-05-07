/*
-Create two functions that take integer inputs from the user and
store the input values into an array then return the array to be printed in the main function:
• One function sorts values in Ascending order and the other in
Descending order.
• The switch decision between the two Functions depends on predefined Macros and #ifdef to control the code flow.
*/

#include <stdio.h>

#define ASCENDING
#define DESCENDING

void sortAscending(int arr[], int size);
void sortDescending(int arr[], int size);
void printArray(int arr[], int size);

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    #ifdef ASCENDING
        sortAscending(arr, size);
        printf("\nArray sorted in Ascending Order: ");
        printArray(arr,size);
    #endif

    #ifdef DESCENDING
        sortDescending(arr, size);
        printf("\nArray sorted in Descending Order: ");
        printArray(arr,size);
    #endif

    return 0;
}
void sortAscending(int arr[], int size) {  // bubble sort alogorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int size) { // bubble sort alogorithm
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}