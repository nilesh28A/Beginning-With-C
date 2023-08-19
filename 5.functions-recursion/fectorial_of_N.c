#include<stdio.h>

int fact(int n);

int main(){
    int f;
    printf("enter anumber that you eant to fectorial:-");
    scanf("%d", &f);
    printf("factorial is:%d", fact(f));
    return 0;
}

int fact(int n) {
    if(n==0){
        return 1;
    }
    int factnm1 = fact(n-1);
    int factN = factnm1*n;
    return factN;
}