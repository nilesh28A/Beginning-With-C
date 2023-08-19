#include<stdio.h>

int main(){
    char ch;
    printf("Enter Character");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9'){
        printf("%c is Digit", ch);
    }
    else{
        printf("%c is NOT Digit", ch);
    }
    return 0;
}