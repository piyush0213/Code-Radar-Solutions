#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Read input from the user
    printf("Enter an expression (e.g., 3 + 5): ");
    scanf("%d %c %d", &num1, &operator, &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d\n", num1, operator, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d %c %d = %d\n", num1, operator, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}