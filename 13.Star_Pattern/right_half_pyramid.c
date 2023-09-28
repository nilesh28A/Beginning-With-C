#include<stdio.h>

int main(){
    int rows=5;
    for(int i=0; i<rows; i++) // for collums
    {
        for(int j=0; j<=i; j++)   // for rows control by i
        {
            printf("*");
        }
        printf("\n");
    }
}