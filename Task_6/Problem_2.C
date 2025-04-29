/*
- Write a function that initialize  variables of type struct and a function prints it.
*/
#include <stdio.h>

struct employee{
    const char *name;
    int salary;
    const char *id;
    const char *job_title;
};
void initialize_employee(struct employee *ptr);
void print_employee(struct employee emp);

int main(){
    struct employee emp1;
    initialize_employee(&emp1);
    print_employee(emp1);
}

void initialize_employee(struct employee *ptr){ // pass by reference
    ptr -> name = "Hatem";
    ptr -> salary = 999999999;
    ptr -> id = "Hatem@123";
    ptr -> job_title = "Engineer";
}

void print_employee(struct employee emp){ // pass by value
    printf("Name: %s, Salary: %d, ID: %s, Job Title: %s\n", emp.name, emp.salary,emp.id,emp.job_title);
} 