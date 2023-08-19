#include<stdio.h>
void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter i for indian & enter f for french:---");
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    } else if (ch=='f'){
        bonjour();                      
    } else{
        printf("your country dosent exist");
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
    bonjour();              // indirectly function call
}

void bonjour(){
    printf("Bonjour");
}