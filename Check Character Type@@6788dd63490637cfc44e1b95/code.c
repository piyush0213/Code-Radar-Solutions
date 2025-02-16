#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a == (int)a){
        print("Digit");
    } else if(a == "!@#$%^&*?"){
        printf("Special Character");
    } else if(a == 'a' || a =='e'|| a =='i'|| a=='o'|| a=='u'){
        printf("Vowel");
    } else{
        printf("Consonant")
    }
    return 0;
}