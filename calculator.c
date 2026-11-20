#include <stdio.h>

int main(void)
{
    double result, number;
    char operation;

    printf("Enter the starting number: ");
    if (scanf("%lf", &result) != 1) {
        printf("Invalid number.\n");
        return 1;
    }

    while (1) {
        printf("Current result: %.2f\n", result);
        printf("Enter an operator (+, -, *, /), or = to finish: ");
        if (scanf(" %c", &operation) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (operation == '=') {
            break;
        }

        switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                break;
            default:
                printf("Invalid operator. Use +, -, *, / or =.\n");
                continue;
        }

        printf("Enter the next number: ");
        if (scanf("%lf", &number) != 1) {
            printf("Invalid number.\n");
            return 1;
        }

        switch (operation) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                if (number == 0.0) {
                    printf("Error: division by zero is not allowed.\n");
                    return 1;
                }
                result /= number;
                break;
        }
    }

    printf("Final result: %.2f\n", result);
    return 0;
}
