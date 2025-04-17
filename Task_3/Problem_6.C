/*
    Mirror Array:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315999616
*/

#include <stdio.h>

void swap(int *x, int *y);
int main(){
    int N,M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &matrix[i][j]);
        }
        for (int z = 0; z < M/2; z++){
            swap(&matrix[i][z], &matrix[i][M-z-1]);
        }
    }
    
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
}

void swap(int *x, int *y){
    int temp;
    temp =  *x;
    *x = *y;
    *y = temp;
}