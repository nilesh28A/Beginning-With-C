#include<stdio.h>

int main()
{
    int const age;
    printf("enter age:");
    scanf("%d", &age);
  //  age=15;
    age>=18 ? printf("adult \n") : printf("not adult \n");
    printf("Thank you");
    return 0;
}