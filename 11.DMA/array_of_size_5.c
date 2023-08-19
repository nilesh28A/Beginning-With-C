#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    printf("enter numbers(5)");
    for (int i = 0; i < 5; i++)  {
        scanf("%d",&ptr[i]);
    }

   // print
    for (int i = 0; i < 5; i++)  {
        printf("numner %d is:%d\n",i,ptr[i]);
    }
    
    return 0;
}