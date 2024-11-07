#include <stdio.h>

int main() {
    // Declare variables for the operator and the two operands
    char operator;
    double num1, num2, result;

    // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    // Read the operator entered by the user
    scanf("%c", &operator);

    // Prompt the user to enter two numbers (operands)
    printf("Enter two operands: ");
    // Read the two numbers entered by the user
    scanf("%lf %lf", &num1, &num2);

    // Use a switch statement to perform the operation based on the chosen operator
    switch(operator) {
        case '+': // Addition case
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-': // Subtraction case
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*': // Multiplication case
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/': // Division case
            if (num2 != 0) { // Check for division by zero
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                // Error message for division by zero
                printf("Error! Division by zero.\n");
            }
            break;
        default: // Handle invalid operators
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0; // End of program
}
