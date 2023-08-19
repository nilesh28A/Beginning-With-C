#include<stdio.h>

int main(){
    int i,j,n;
    printf("enter the number till you get prime num: ");
    scanf("%d",&n);
    printf("prime number are:-\n");
    for(i=1; i<=n; i++){
        int c=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d\n", i);
        }
    }
    return 0;
}