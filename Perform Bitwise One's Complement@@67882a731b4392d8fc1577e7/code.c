#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    printf("%d\n", ~num);  // Perform bitwise one's complement and print result
    
    return 0;
}

