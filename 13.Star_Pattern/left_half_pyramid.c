#include<stdio.h>

int main(){
    int rows=5;
    for(int i=0; i<rows; i++) // for collums
    {
        for(int k=0; k<2*(rows-i)-1; k++)  //for space
        {
            printf(" ");
        }

        for(int j=0; j<=i; j++)   // for rows
        {
            printf("* ");
        }
        printf("\n");
    }
}