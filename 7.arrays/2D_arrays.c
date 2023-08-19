#include<stdio.h>

int main(){
    int mark[2][3];
    mark[0][0] = 90;  
    mark[0][1] = 80;
    mark[0][2] = 70;

    mark[1][0] = 60;
    mark[1][1] = 40;
    mark[1][2] = 50;  

    printf("%d", mark[1][1]);
    return 0; 
}