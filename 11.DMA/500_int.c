#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(500*sizeof(int));

   for(int i=0,j=0; i<=499 && j<=500; i++, j++){
    scanf("%d",ptr[i]=j);
   }
   

    for (int i = 0; i < 500; i++)  {
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}