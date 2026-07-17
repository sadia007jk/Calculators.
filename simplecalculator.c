#include<stdio.h>
#include<math.h>

int main() {
    int choice;
    char operation;
    double num1, num2, result;
    printf("Simple Calculator\n");

       printf("1. Arithmetic Operations +, -, *, /, %%: \n");
       printf("2. Percentage Enter your choice: \n");
       printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter 2 numbers to perform operation: ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            return 1;
        }
        printf("Enter an operator (+, -, *, /, %%(Modulus)): ");
        scanf(" %c", &operation);

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
            
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
        if (num2 == 0) {
            printf("Error! Division by zero is not allowed.\n");
            return 1;
        }
            result = num1 / num2;
            break;

        case '%':
            result = fmod(num1, num2);
            break;
    
        default:
            printf("Error! Operator is not correct\n");
        return 1;}
            
        printf("%.3lf %c %.3lf = %.3lf\n", num1, operation, num2, result);}
     else if (choice == 2) {
        printf("Enter a number to find its percentage: ");
        scanf("%lf", &num1);
        result = (num1 / 100);
        printf("Percentage of %.3lf is %.3lf percent.\n", num1, result);
    
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    return 0;
}
