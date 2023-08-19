#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1; i<=20; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;

} 
