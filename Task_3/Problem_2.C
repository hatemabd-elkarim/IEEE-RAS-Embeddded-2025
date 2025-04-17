/*
    Lowest Number:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315909398
*/

#include <stdio.h>

int main (){
    int N, min, min_index = 1;
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
        if (i == 0)
            min = A[i];
        if (A[i] < min){
            min = A[i];
            min_index = 1 + i;
        }
    }
    
    printf("%d %d", min, min_index);
}