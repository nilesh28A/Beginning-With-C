#include<stdio.h>

int main()       
{
    char latter;
    printf("enter first latter (t,z,c,s,r):");
    scanf("%c", &latter);
    int radius;
    int base;
    int height;
    switch (latter)
    {   
        case 't': 
        printf("Enter base & height of triangle:");
        scanf("%d%d",&base,&height);
        printf("Area of a triangle is:%d",(base*height)/2);
        break;
        case 'z': 
        printf("Enter radius of circal:");
        scanf("%d",radius);
        printf("Area of a circal is:%d",3.14*radius*radius);
        break;
        case 'c':
        printf("Enter radius of circal:");
        scanf("%d",&radius);
        printf("Area of a circal is:%d",3.14*radius*radius);
        break;
        case 's': printf("Thursday");
        break;
        case 'r': printf("");
        break;
        default: printf("noy a valid day");
    }

    return 0;
}