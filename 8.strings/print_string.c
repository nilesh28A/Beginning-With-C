#include<stdio.h>

void printString(char arr[]);

int main(){
    char firstname[]= "Nilesh";
    char lastname[]= "Asodariya";
    printString(firstname);
    printString(lastname);
    return 0;

}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\t");
}