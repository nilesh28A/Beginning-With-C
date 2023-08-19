#include<stdio.h>
int main(){
    int n;
    do{
    printf("enter a number:");
    scanf("%d",&n);
    if (n%2!=0){      // exit from running loop
        break;
    }                             // multiply of 7

    } while (1); // infinite loop
    printf("thank you");
    return 0;
    
} 