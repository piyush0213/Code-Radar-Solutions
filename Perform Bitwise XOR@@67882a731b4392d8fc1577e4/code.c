#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a ^ b);  // Perform bitwise XOR and print result
    
    return 0;
}
