#include<stdio.h>
int main(){
    for (int i=1; i<=20; i++){
        if(i==3){
            continue;
        }                       // skip any value
        if(i==7){
            continue;
        }
        printf("%d\n", i);
    }
}