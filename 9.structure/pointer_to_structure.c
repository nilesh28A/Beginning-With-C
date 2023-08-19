#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    
    struct student s2={13,9.82,"Mayur Asodariya"};

    printf("%s\n",s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n",s2.cgpa);

    struct student *ptr = &s2;
     printf("%s\n",(*ptr).name);
     printf("%s\n", ptr->name); // arrow operator

    return 0;
} 
