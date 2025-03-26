
/*
    Fibonacci:
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312593856
*/
#include <stdio.h>

int fibonachi(int N);
int main(){
    int N;
    scanf("%d", &N);
    printf("%d", fibonachi(N));
}
int fibonachi(int N){ 
    if (N <= 0)
        return 0;
    else if (N == 1)
        return 0;
    else if (N == 2)
        return 1;

    return fibonachi(N-1) + fibonachi(N-2);  
}           