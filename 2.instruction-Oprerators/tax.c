#include<stdio.h>

int main(){
    double income;
    printf("Enter your income:");
    scanf("%u", &income);

    if(income<=9525){
        printf("Tax payable = 0");
    }
    else if((9526>income)&&(income<=37500)){
        printf("Tax payable = %u", income*0.12);
    }
    else if((38701>income)&&(income<=82500)){
        printf("Tax payable = %u", income*0.22);
    }
    else{
        printf("Tax payable = %u", (income*0.32)+1000);
    }

    return 0;
}
