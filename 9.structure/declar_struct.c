#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll=003;
    s1.cgpa=8.46;
    strcpy(s1.name,"Nilesh Asodariya");

    printf("%s\n",s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n",s1.cgpa);

    struct student s2={13,9.82,"Bhavika Asodariya"};
    printf("%s\n",s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n",s2.cgpa);

    struct student ravi={25,8.64,"Ravi Vaghasiya"};
    struct student *ptr = &ravi;
    printf("%s\n",ptr->name);
    printf("%d\n",ptr->roll);
    printf("%f\n",ptr->cgpa);


    return 0;

} 