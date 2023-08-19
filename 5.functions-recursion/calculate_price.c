#include<stdio.h>

void calP(float value);

int main(){
    float value = 100.0;
    calP(value);
    printf("value is:%f", value);
    return 0;
}   /* changes to parameter in functions
        dont change the value in calling function
        
        Because a copy of argument if passed to the function...*/

void calP(float value){
    value = value + (0.18 * value);
    printf("final price is: %f\n",value);
}