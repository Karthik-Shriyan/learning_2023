//4. Write a simple calculator program which should accept inputs in the same order.
//     - Operand 1
//     - Operator
//     - Operand 2
// The order of scan should be same, for example, you should first scan in the following order.
// printf("Enter Number1: );
// Scan the first number form the user.
// printf("Enter the operator: );
// Scan the operator from the user.
// printf("Enter Number2: );
// Scan the second number form the user.

#include <stdio.h>

// Function to perform addition
float add(float a, float b)
{
    return a + b;
}

// Function to perform subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function to perform multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function to perform division
float divide(float a, float b)
{
    return a / b;
}

// Function to handle user input and perform calculations
void calculator()
{
    float num1, num2, result;
    char operator;

    printf("Enter Number 1: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number 2: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = add(num1, num2);
        printf("Result: %.2f\n", result);
        break;
    case '-':
        result = subtract(num1, num2);
        printf("Result: %.2f\n", result);
        break;
    case '*':
        result = multiply(num1, num2);
        printf("Result: %.2f\n", result);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
        }
        break;
    default:
        printf("Invalid operator!\n");
        break;
    }
}

int main()
{
    calculator();
    return 0;
}