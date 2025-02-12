#include <stdio.h>

int main() {
    int num, shift;
    scanf("%d %d", &num, &shift);
    
    printf("%d\n", num << shift);  // Perform bitwise left shift and print result
    
    return 0;
}
