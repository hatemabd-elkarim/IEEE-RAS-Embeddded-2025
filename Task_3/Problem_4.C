/*
-Write a C program to read elements in two matrices and add elements of both matrices. 
C program for addition of two matrix. 
Matrix addition program in C. 
Logic to add two matrix in C programming.

Input:
matrix1: 
1 2 3
4 5 6
7 8 9
matrix2:
9 8 7
6 5 4
3 2 1

Output:
Sum of both matrix =
10 10 10
10 10 10
10 10 10
*/

#include <stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("Number of rows in first matrix: ");
    scanf("%d", &r1);
    printf("Number of columns in first matrix: ");
    scanf("%d", &c1);
    
    int first[r1][c1];
    printf("Fill your first matrix\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    // ensure that the two matrices have the same dimensions
    do{
        printf("Number of rows in second matrix: ");
        scanf("%d", &r2);
    }while(r1 != r2);

    do{
        printf("Number of columns in second matrix: ");
        scanf("%d", &c2);
    }while(c1 != c2);
    
    int second[r2][c2];
    printf("Fill your second matrix\n");
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }
    
    printf("Sum of both matrices\n");
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", first[i][j] + second[i][j]);
        }
        printf("\n");
    }

}