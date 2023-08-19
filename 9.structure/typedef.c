#include<stdio.h>
#include<string.h>

// to creat an alias for datatype(nikname)

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}stu;

int main(){
    stu s1;                  // both are same
    s1.roll=003;
    s1.cgpa=8.46;
    strcpy(s1.name,"Nilesh Asodariya");
    printf("%s\n",s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n",s1.cgpa);
}
