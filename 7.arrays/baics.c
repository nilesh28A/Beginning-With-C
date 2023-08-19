#include<stdio.h>

int main(){
    int marks[3];

    printf("enter physics marks:- ");
    scanf("%d",&marks[0]);

    printf("enter chemestry marks:- ");
    scanf("%d",&marks[1]);

    printf("enter maths marks:- ");
    scanf("%d",&marks[2]);

    if(marks[2]>=100){
        printf("Wrong Marks");
    }
    printf("phy=%d chem=%d math=%d", marks[0],marks[1],marks[2]);

    return 0;
}