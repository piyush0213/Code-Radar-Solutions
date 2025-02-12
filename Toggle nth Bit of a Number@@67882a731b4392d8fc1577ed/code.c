#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    
    int mask = 1 << n;
    
    num = num ^ mask;
    
    printf("%d\n", num);
    
    return 0;
}
