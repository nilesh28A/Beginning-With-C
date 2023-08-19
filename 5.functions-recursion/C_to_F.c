#include<stdio.h>
 float convert(float cels);

 int main(){
   float c;
   printf("enter your C' value:");
   scanf("%f", &c);

   printf("far:%f F", convert(c));
   return 0;
 }

 float convert(float cels){
    float far=cels*(9.0/5.0)+32;
    return far;
 }
