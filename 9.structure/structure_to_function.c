#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main(){
    struct student s1 = {3,8.52,"nilesh asodariya"};
    printInfo(s1);
    return 0;
} 

void printInfo(struct student s1){
    printf("student Information\n");
    printf("%s\n",s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n",s1.cgpa);
}