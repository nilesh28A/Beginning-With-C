#include<stdio.h>
#include<string.h>

void cheak(char str[], char ch);

int main(){
    char str[] = "Multispan India";
    char ch = 'n';
    cheak(str, ch);
  
    return 0;
}

void cheak(char str[], char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("charcter is present");
            return;
        }
    }
    printf("charcter is not present");
}