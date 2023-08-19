#include<stdio.h>

int main(){

    int num;
    printf("enter anumber");
    scanf("%d", &num);

    if(num >= 1){
        printf("number is natural\n");
    }else{
        printf("number is not natural");
    }  
    return 0;
}      