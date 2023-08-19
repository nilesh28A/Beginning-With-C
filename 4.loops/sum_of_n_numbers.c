#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    int sum=0;
    for(int i=n, j=n; i>=1 && j>=1; i--,j--){         // in loop variable is only for that block
        sum=sum+i; // sum += i
        printf("%d\n", j);
    }
    printf("sum is %d", sum);
    return 0;
}