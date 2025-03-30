#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, next;
    
    for (int i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) printf(" ");
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the function
    fibonacciSeries(n);

    return 0;
}
