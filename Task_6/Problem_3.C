/*
-Write a function that creates a Dog / Cat with a name ,age and kind etc.
*/

struct cat{
    const char *name;
    const char *kind;
    const char *food;
    const char *owner;
};
void new_cat(struct cat *ptr, const char *name, const char *kind, const char *food, const char *owner); // you can also return a struct instead of passing a reference
#include <stdio.h>

int main(){
    struct cat my_cat;
    new_cat(&my_cat, "Bor3y", "Balady", "Anything and everything", "Hatem");
    printf("Name: %s, Kind: %s, Food: %s, Owner: %s\n", my_cat.name, my_cat.kind,my_cat.food, my_cat.owner);

}
void new_cat(struct cat *ptr, const char *name, const char *kind, const char *food, const char *owner){ // something like constuctors
    ptr -> name = name;
    ptr -> kind = kind;
    ptr -> food = food;
    ptr -> owner = owner;
}