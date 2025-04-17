/*
    Matrix:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315920197
*/

#include <stdio.h>
#include <math.h>

int main(){
    int N, primary = 0, secondary = 0;
    scanf("%d", &N);
    int matrix[N][N];
    
    // fill the matrix
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j) primary += matrix[i][j];
            if (i == N-j-1) secondary += matrix[i][j];
        }
    }
    printf("%d", primary > secondary ? primary-secondary : secondary-primary);

}