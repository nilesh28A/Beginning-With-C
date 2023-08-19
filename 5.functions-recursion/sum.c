#include<stdio.h>

int sum(int a, int b);   // return value type

int main(){
    int a,b;
    printf("Enter firts num:");
    scanf("%d", &a);
    printf("Enter second num:");
    scanf("%d", &b);

    int s=sum(a,b);
    printf("sum is %d",s);
    return 0;
}

int sum(int x, int y){
    return x+y;            // calling function
}