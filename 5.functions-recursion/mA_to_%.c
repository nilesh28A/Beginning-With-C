#include<stdio.h>

int main(){
    float mA;
    printf("Enter your PTC mA output value (4 to 20):");
    scanf("%f",&mA);

    if(mA<4){
        printf("Your output value is LOW: %f ",(6.25*mA - 25));
    } 
    else if(mA>20){
        printf("Your output value is HIGH : %f ",(6.25*mA - 25));
    }
    else{
    printf("your Output percentage value is : %f ",(6.25*mA - 25));
    }
    return 0;
}
