#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%c %d %c", &name, &age, &hobby);
    printf("Name: %c/n", name);
    printf("Age: %d/n", age);
    printf("Hobby: %c/n", hobby);
    return 0;
}
