#include<stdio.h>
int main() {
    for(int i=100; i>=1; i=i-1) {
        if(i==70){
            break;           // exit for any loop
        }
        printf("%d \n",i); 
        }
    return 0;
}
