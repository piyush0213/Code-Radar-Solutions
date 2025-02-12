#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {  // One number must be positive, and the other must be negative
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
