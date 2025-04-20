/*
-Write a function that prints even number from a string, starting with the first character, followed by a new line.
“Str = ‘012345678’”.

Output:
02468
*/

#include <stdio.h>
#include <ctype.h>

void print_even(char *str);
int main(){
    char str[100];
    scanf("%[^\n]s", str);
    print_even(str);
    return 0;
}
void print_even(char *str){
    for (int i = 0; str[i] != '\0'; i++ ){
        if (isdigit(str[i]) && (str[i] - '0' ) % 2 == 0 ) printf("%c", str[i]);
    }
}
