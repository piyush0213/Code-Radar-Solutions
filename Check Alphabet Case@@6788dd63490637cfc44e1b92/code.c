#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if (c == 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'){
        print("Uppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}