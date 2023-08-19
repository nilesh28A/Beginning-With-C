#include<stdio.h>

void printstring(char arr[]);

int main(){
    char name[15];
    fgets (name, 50, stdin);
    puts(name);
    printString(name);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("Your Name is:%c",arr[i]);
    }
}   