#include<stdio.h>

int main(){
    int i=1;
    printf("%d\n", i++); //use, then increse (post increment)
    printf("%d\n", i);

    printf("%d\n", ++i);  // increase, then use (pre increment)
    printf("%d\n", i);

    return 0;
}