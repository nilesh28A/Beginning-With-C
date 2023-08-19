#include<stdio.h>

int main(){
    int n1, n2, n3;
    printf("Enter three Numbers:");
    scanf("%d%d%d", &n1,&n2,&n3);

    if(n1<n2 && n1<n3){
        printf("%d is smallest", n1);
    }
    else if(n2<n3){
        printf("%d is smallest", n2);
    }
    else{
        printf("%d is smallest", n3);
    }
    return 0;
}