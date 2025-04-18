/*
    Lucky Array:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316065225
*/

#include <stdio.h>

int main(){
    int N, min, count = 0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
        if (i == 0) min = A[i];
        if (A[i] < min) min = A[i];
    }
    for (int i = 0; i < N; i++){
        if (A[i] == min) count ++;
    }

    if (count % 2) printf("Lucky");
    else printf("Unlucky");
}