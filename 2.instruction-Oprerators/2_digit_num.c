#include<stdio.h>

int main()
{
    int x;
    printf("enter the value:");
    scanf("%d", &x);
    printf("%d", 9<x && 100>x);
    // value between 9 to 100
    return 0;
}