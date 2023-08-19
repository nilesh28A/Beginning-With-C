#include<stdio.h>

int main(){

    int x;
    int *add;

    add=&x;         // pointer arithmatic
    *add=5;

    printf("x=%d\n",x);
    printf("*add=%d\n",*add);

    (*add)++;
    printf("x=%d\n",x);
    printf("*add=%d",*add);

    return 0;

}