#include<stdio.h>
int main()
{
    int marks;
    printf("enter a mark:");
    scanf("%d", &marks);

    if(marks >= 0 && marks <= 30)
    {
        printf("FAIL");   // block = combination of statements
    }
    else if(marks > 30 && marks<=100)
    {
        printf("PASS");
    }
    else
    {
        printf("wromg marks");
    }
    return 0;
}