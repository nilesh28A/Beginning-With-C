#include<stdio.h>

int main(){
    int n, i, c=0;
    printf("enter a number: ");
    scanf("%d", &n);

    /* prime numbers are divisibal by only 2 numbers
    1.one, 2.itsalf */
    
    for(i=1; i<=n; i++){
        if(n%i==0){
            c++;
        }
    } 
    if(c==2){
        printf("%d is a prime number", n);
    }else{
        printf("%d is not a prime number",n);
    }
    return 0;
}