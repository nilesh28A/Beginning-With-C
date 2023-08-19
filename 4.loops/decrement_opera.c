#include<stdio.h>

int main(){
    int i=10;
    printf("%d\n", i--); //use, then decreas (post decrement)
    printf("%d\n", i);

    printf("%d\n", --i);  // decrease, then use (pre decrement)
    printf("%d\n", i);

    return 0;
}