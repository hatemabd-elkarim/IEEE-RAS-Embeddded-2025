/*
-Write a C program to multiply Two matrics using pointers.

Input:
First matrix
10 20 30
40 50 60
70 80 90
Second matrix
1 2 3
4 5 6
7 8 9
Output:
Product of matrices is:
300 360 420
660 810 960
1020 1260 1500
*/

// This implementation assumes that the two matrices would be 3*3 for simplification :)
#include <stdio.h>

int main(){
    int first[3][3], second[3][3], multiply[3][3] = {0};
    printf("First Matrix\n");
    for (int *p = &first[0][0]; p <= &first[2][2]; p++) scanf("%d", p);
    printf("Second Matrix\n");
    for (int *p = &second[0][0]; p <= &second[2][2]; p++) scanf("%d", p);

    printf("Product of matrices is:\n");
    int (*row)[3] = first;
    int (*col)[3] = second;
    for (int *p = &multiply[0][0], j = 0; p <= &multiply[2][2]; p++){
        for (int i = 0; i < 3; i++){
            *p += *(*(row + j/3) + i) * *(*(col+i)+j%3); // (0,0) (0,1) (0,2) (1,0) (1,1) (1,2) (2,0) (2,1) (2,3)
        }
        j++;
        printf("%d ", *p);
        if (j % 3 == 0) printf("\n");
    }
}
