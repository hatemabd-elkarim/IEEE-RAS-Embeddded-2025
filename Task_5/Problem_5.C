/*
-Write a C program to return multiple values from function. 
(Make a function get odd numbers and make the function return it then print it using pointers).
 
Input:
Array elements: 1, 2, 3, 4, 5, 6, 7

Output:
Odd numbers are: 1 3 5 7 
Total odd numbers: 4
*/
#include <stdio.h>

void getOddNumbers(int input[], int size, int output[], int *oddCount) {
    *oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (input[i] % 2 != 0) {
            output[*oddCount] = input[i]; 
            (*oddCount)++;                
        }
    }
}

int main() {
    int input[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(input) / sizeof(input[0]);
    int output[100];
    int oddCount;

    getOddNumbers(input, size, output, &oddCount);

    printf("Odd numbers are: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", output[i]);
    }
    printf("\nTotal odd numbers: %d\n", oddCount);

    return 0;
}
