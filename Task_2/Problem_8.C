/*
    3n+1 sequence:
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312628025
*/
#include <stdio.h>
int count = 1;
void sequence(int N);
int main(){
    int N;
    scanf("%d", &N);
    sequence(N);
    printf("%d", count);
}
void sequence(int N){
    if (N == 1)
        return;
    count++;
    if (N % 2)
        return sequence (3 * N + 1);
    else 
        return sequence (N / 2);
    
}