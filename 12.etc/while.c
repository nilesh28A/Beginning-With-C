#include<stdio.h>

int main()
{
    int start, end, even;
    printf("entret start and end number:");
    scanf("%d %d",&start,&end);

    even= 0;
    while(start<=end)
    {
        if(!(start % 2))
        {
            printf("%3d\n",start);
            even++;
        }
        start++;
    }
    printf("total even number is:%d",even);
}
