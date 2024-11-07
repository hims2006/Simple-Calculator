# Simple-Calculator
Simple Calculator Program in C
This program is a simple calculator built in C that performs basic arithmetic operations: addition, subtraction, multiplication, and division. It takes an operator and two operands as input from the user, then displays the result of the specified operation.

Features
Operators Supported: Addition (+), Subtraction (-), Multiplication (*), and Division (/).
Error Handling:
If the user enters an invalid operator, the program will display an error message.
Division by zero is prevented by checking the second operand and displaying an error message if it’s zero.

How to Use

Compile the Program:
gcc calculator.c -o calculator
Replace calculator.c with the filename of the program.


Run the Program:
./calculator
Input Requirements:

The program will prompt you to enter an operator (+, -, *, or /).
Next, enter two numbers (operands) for the calculation.
Example Usage:

Enter an operator (+, -, *, /): +
Enter two operands: 5 3
Output: 5.00 + 3.00 = 8.00
Code Explanation
The program uses a switch statement to handle different arithmetic operations based on the operator input.

Switch Cases:

Each case (+, -, *, /) performs the respective arithmetic operation.
If the operator is /, it checks if the second operand is zero to avoid division by zero.
Default Case:

If an invalid operator is entered, the program displays an error message.
Example Output
Addition:


Enter an operator (+, -, *, /): +
Enter two operands: 5 3
5.00 + 3.00 = 8.00
Division by Zero:


Enter an operator (+, -, *, /): /
Enter two operands: 5 0
Error! Division by zero.

