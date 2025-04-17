/*
    Sorting:
    https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/315912744
*/

#include <stdio.h>

void swap(int *x, int *y);
int main(){
    int N;
    bool swapped;
    scanf("%d", &N);
    int A[N];

    // bubble sort algorithm
    for (int i = 0; i < N; i++) scanf("%d", &A[i]);

    for (int i = 0; i < N-1; i++){
        swapped = false;
        for (int j = 0; j < N-i-1; j++){
            if (A[j] > A[j+1]) swap(&A[j], &A[j+1]);
            swapped = true;
        }
        if (!swapped) break;  // if the array is already sorted
    }

    for (int i = 0; i < N; i++) printf("%d ", A[i]);

}

void swap(int *x, int *y){
    int temp;
    temp =  *x;
    *x = *y;
    *y = temp;
}