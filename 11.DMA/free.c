#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    printf("enrter n:");
    scanf("%d",&n);
    ptr = (float*) malloc (n*sizeof(float));

    /*  ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 8;
    ptr[3] = 6;
    ptr[4] = 7; */

    for (int i = 0; i < n; i++)  {
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);

    ptr = (float*) malloc (2*sizeof(float));
    for (int i = 0; i < 2; i++)  {
        printf("%d\n",ptr[i]);
    }

    return 0;
}