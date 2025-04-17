/*
    Searching:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315908194
*/

#include <stdio.h>

int main(){
    int N,A,X;
    scanf("%d", &N);
    int numbers[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &A);
        numbers[i] = A;
    }
    scanf("%d", &X);

    for (int i = 0; i < N; i++){
        if (X == numbers[i]){
            printf("%d ", i);
            return 0; // exit program if found
        }
    }
    // if not found
    printf("%d", -1);
}

