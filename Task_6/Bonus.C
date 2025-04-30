/*
-Write a function deletes or frees a Dog/Cat or Employee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cat{
     char *name;
     char *kind;
     char *food;
     char *owner;
};
void free_cat (struct cat *ptr){
    if (ptr == NULL) return;

    free((void *)ptr->name);
    free((void *)ptr->kind);
    free((void *)ptr->food);
    free((void *)ptr->owner);
    free(ptr);

}
int main(){
    struct cat *ptr = (struct cat*) malloc(sizeof(struct cat));
    ptr->name = strdup("Bor3y");
    ptr->kind = strdup("Balady");
    ptr->food = strdup("Anything and everything");
    ptr->owner = strdup("Hatem");
    printf("Name: %s, Kind: %s, Food: %s, Owner: %s\n", ptr->name, ptr->kind,ptr->food, ptr->owner);
    free_cat(ptr);
}
// you can use valigrand tool to check for memory leaks after execution
/*
gcc -g -o cat_program cat_program.c
valgrind --leak-check=full ./cat_program
*/