/*
    Max Subsequence:
    https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316016148
*/

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    char S[N+1];
    scanf("%s", S);
    int req = N;
    for(int i = 0; i < N - 1; i++){
        if (S[i] == S[i + 1]) {
            S[i] = '\0';
            req--;
        }
    }
    printf("%d", req);
}