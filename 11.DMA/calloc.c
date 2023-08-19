#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    printf("enrter n:");
    scanf("%d",&n);
    ptr = (float*) calloc (n,sizeof(float));   // replace m with c

    /*  ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 8;
    ptr[3] = 6;
    ptr[4] = 7; */

    for (int i = 0; i < n; i++)  {
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}