#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    if(a>='A' && a<='Z'){
        printf("Uppercase");
    } else if(a>='a' && a<='z'){
        printf("Lowercase");
    } else{
        printf("Not an alphabet");
    }
    return 0;
}