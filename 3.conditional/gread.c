#include<stdio.h>

int main(){
    float marks;
    printf("Ent your marks:(0-100)= ");
    scanf("%f", &marks);

    if(marks>=0 && marks<=30){
        printf("Gread: C");
    }
    else if(marks>=30 && marks<=70){
        printf("Gread: B");
    }
    else if(marks>=71 && marks<=90){
        printf("Gread: A");
    }
    else if(marks>=91 && marks<=100){
        printf("Gread: A++");
    }
    else{
        printf("You enter wrong marks");
    }
    return 0;
}