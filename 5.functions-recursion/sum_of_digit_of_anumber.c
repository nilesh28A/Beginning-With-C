#include<stdio.h>

int sumofdigit(int);

int main(){
    int n, result;
    printf("enter a digit:");
    scanf("%d", &n);
    result = sumofdigit(n);
    printf("%d\n", result);
    return 0;
}

int sumofdigit(int n){
    if ( n==0 ){
        return 0;
    }
    return ( n%10 + sumofdigit(n/10));
}