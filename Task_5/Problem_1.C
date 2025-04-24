/*
-Write a C program to compare two strings using loop character by character.
(Returns 1 if true and 0 if false, Not allowed to use the built in library if you do you will get minus 2 Not zero :).

Input:
String1: RAS Chapter
String2: RAS Chapter

Output:
Both strings are Identical
*/
#include <stdio.h>

#define MAX_SIZE 100
int get_size (char str[]);
int main(){
   char str1[MAX_SIZE], str2[MAX_SIZE];
   gets(str1);
   gets(str2);
   int str1_size = get_size(str1); // you don't need to divide by sizeof(char) because it is one
   int str2_size = get_size(str2);

   if (str1_size == str2_size)
   {
    int i;
    for(i = 0; i < str1_size; i++){
        if (str1[i] != str2[i]) break;
    }

    if (i == str1_size){
        printf("Both strings are Identical");
        return 0;
    }

   }

   printf("The two strings are different");
   
}

int get_size (char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}