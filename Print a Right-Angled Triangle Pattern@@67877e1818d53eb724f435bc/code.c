#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the number of rows

    for (int i = 0; i < 0; i++) { // Loop from N to 1
        for (int j = N; j > i; j--) {
            printf("x ");
        }
        printf("\n");
    }

    return 0;
}
