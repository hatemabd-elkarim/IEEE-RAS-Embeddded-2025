/*
    Reach value:
    https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312632809
*/

#include <stdio.h>
#include <math.h>
void scan(int N);
bool canReach(double num);
int main(){
    int T;
    scanf("%d", &T);
    scan(T);
    
}

void scan(int N){
    if (N == 0)
        return;

    double num;
    scanf("%lf", &num); // Note format specifier for double is %lf only in scanf but with printf you can use %f also
    
    if (canReach(num))
        printf("YES\n");
    else
        printf("NO\n");

    scan(N-1);
}

bool canReach(double num){
    if (num < 1)
        return false;

    if (num == 1)
        return true;

    if (canReach(num / 10))
        return true;
    else if (canReach (num / 20))
        return true;
    else 
        return false;
}