/*
-Write a program that prompts the user for a 2D array of integers and its size (number of rows and columns). 
The program should check if the array is a magic square (a square matrix in which the sum of every row, column and diagonal is the same). 
If it is a magic square, the program should print "magic square" and if not, it should print "not a magic square". 

Input: 
Enter the size of the square: 3 
Enter the elements of the square: 
8 1 6 
3 5 7 
4 9 2 
Output: 
The square is a magic square. 

Example input/output for a 4x4 non-magic square: 
Input:
 Enter the size of the square: 4 
Enter the elements of the square: 
6 3 5 1 
1 8 5 8 
6 7 0 4 
9 2 4 1 
Output: The square is not a magic square.  
*/

#include <stdio.h>
int main(){
    int size, rows, cols = 0, primary = 0, secondary = 0;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    int square[size][size];

    printf("Enter the elements of the square:\n");
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &square[i][j]);
            if (i == j) primary += square[i][j];
            if (i == size-j-1) secondary += square[i][j];
        }
    }
    if (primary != secondary){
        printf("The square is not a magic square.");
        return 0;
    } else{
        for (int i = 0; i < size; i++){
            rows = 0;
            cols = 0;
            for (int j = 0; j < size; j++){
                rows += square[i][j];
                cols += square[j][i];
            }
            if (rows != primary || cols != primary){
                printf("The square is not a magic square.");
                return 0;
            }

        }
    }
    printf("The square is a magic square.");
}