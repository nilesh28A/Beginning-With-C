#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter your name:-");
    scanf("%s",name);
    int length=strlen(name);
    printf("length is : %d", length);
    return 0;
}