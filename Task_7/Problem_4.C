/*
-Create an enum to represent the days of the week (starting from SATURDAY to FRIDAY). 
Then write a function that takes a value of this enum type and returns whether it is a weekday or a weekend.
*/
#include <stdio.h>

void day (int n);
int main(){
    enum week {Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday };
    day(Monday); // Weekday
    day(Friday); // Weekend
    
}
void day(int n){
    switch (n){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
                printf("Weekday\n");
                break;
        case 6:
        case 7:
                printf("Weeekend\n");
                break;
    }
}