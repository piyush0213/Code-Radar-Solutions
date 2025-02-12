#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int numBits = sizeof(n) * 8; 
    int foundMSB = 0; 

    for (int i = numBits - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;

        if (bit == 1) {
            foundMSB = 1;
        }

        if (foundMSB || i == 0) {
            printf("%d", bit);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    decimalToBinary(n);
    printf("\n");

    return 0;
}