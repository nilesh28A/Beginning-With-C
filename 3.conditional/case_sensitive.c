#include<stdio.h>

int main(){
    char ch;
    printf("enter a character:-");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }else{
        printf("not an english Latter");
    }
    return 0;
}