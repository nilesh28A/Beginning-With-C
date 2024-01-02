#include<stdio.h>

int main(){

    double charge = -1.60217662e-19;
    float distance = 1.5e+8;

    printf("charge of an electon = %le\n",charge);
    printf("distance between earth & sun = %eKM",distance);

    // IEEE754 stander for float value representstion
 
    return 0;
}