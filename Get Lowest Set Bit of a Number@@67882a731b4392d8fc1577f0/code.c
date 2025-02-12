#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int position = 1;
    
    if (num == 0) {
        printf("No set bit\n");
    } else {
        while (!(num & 1)) {
            num >>= 1;  
            position++;
        }
        printf("%d\n", position);
    }
    
    return 0;
}
