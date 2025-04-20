/*
-Write a C program to swap two numbers using pointers (calling by reference method).

Input:
a: 10
b: 20

Output:
a: 20
b: 10
*/

#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b);
int main()
{
    int a;
    printf("a: ");
    scanf("%d", &a);

    int b;
    printf("b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("\nAfter swapping:\na: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
