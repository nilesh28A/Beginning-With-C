#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("entrer name:-");
    scanf("%s", name);
    printf("entrer age:-");
    scanf("%d", &age);
    printf("entrer cgpa:-");
    scanf("%f", &cgpa);

    fprintf(fptr, "student name:- %s\n", name);
    fprintf(fptr, "student age:- %d\n", age);
    fprintf(fptr, "student marks:- %f\n", cgpa);

    fclose(fptr);
    return 0;
}