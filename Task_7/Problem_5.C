/*
-Create an enum with members indicating some arithmetic operations like:
 [ +, -, *, /, &, |, ! ], then Implement a calculator that takes three inputs from the user: 
  {operand1, operand2, operation char} and prints the result. 
• Note that you have to match the operation value inside the enum with its corresponding value in ASCII.
• What is the size of the previous enum? If we add some extra members to the enum what would be the new size and why?
*/

#include <stdio.h>

typedef enum {
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    AND = '&',
    OR = '|',
    NOT = '!'
} Operation;

double calculate(double operand1, double operand2, Operation op);

int main() {
    double operand1, operand2;
    char op;
    Operation operation;

    // Take inputs from user
    printf("Enter First Number: ");
    scanf("%lf", &operand1);
    printf("Enter Second Number: ");
    scanf("%lf", &operand2);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &op);  //space before %c to ignore newline character.

    // Match operator with enum member
    switch (op) {
        case '+': operation = ADD; break;
        case '-': operation = SUB; break;
        case '*': operation = MUL; break;
        case '/': operation = DIV; break;
        case '&': operation = AND; break;
        case '|': operation = OR; break;
        case '!': operation = NOT; break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    // Perform the calculation and print result
    double result = calculate(operand1, operand2, operation);
    printf("Result: %lf\n", result);

    printf("Size of enum: %d", sizeof(Operation)); // 4
    // size of enum is 4 bytes like int and it is fixed

    return 0;
}

double calculate(double operand1, double operand2, Operation op) {
    switch (op) {
        case ADD: return operand1 + operand2;
        case SUB: return operand1 - operand2;
        case MUL: return operand1 * operand2;
        case DIV: return operand1 / operand2;
        case AND: return (int)operand1 & (int)operand2;  // Bitwise AND for integers
        case OR: return (int)operand1 | (int)operand2;    // Bitwise OR for integers
        case NOT: return !(int)operand1;                  // Logical NOT for operand1
        default: return 0;  // Invalid operation
    }
}
