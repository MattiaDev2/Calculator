#include <stdio.h>

int main() {
    float number1, number2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &number1);
    printf("Enter the second number: ");
    scanf("%f", &number2);
    printf("Select the operation (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("The result of the sum is: %.2f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("The result of the difference is: %.2f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("The result of the product is: %.2f\n", result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("The result of the division is: %.2f\n", result);
            } else {
                printf("Error: division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
