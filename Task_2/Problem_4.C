/*
    Print from 1 to N
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312501629
*/

#include <stdio.h>

void print(int N);
int main(){
    int N;
    scanf("%d", &N);
    print(N);
}
void print(int N){
    if (N <= 0)
        return;
    print(N-1);
    printf("%d\n", N);
}