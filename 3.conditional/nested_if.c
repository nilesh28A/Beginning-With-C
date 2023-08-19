#include<stdio.h>

int main(){

    int num;
    printf("enter anumber");
    scanf("%d", &num);

    if(num >= 0){
        printf("Positive\n");
        if(num %2 == 0){
            printf("Even\n");
        }else{
            printf("Odd");
        }
    }else{
        printf("Nagative\n");
         if(num %2 == 0){
            printf("Even\n");
        }else{
            printf("Odd");
        }
    }
    return 0;
}