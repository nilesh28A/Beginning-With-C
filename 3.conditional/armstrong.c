#include<stdio.h>

int main(){
    int num,originalNum, remainder, result, n = 0;
    printf("enter an integer:");
    scanf("%d",&num);

    originalNum=num;

    //store the number of digitsmof num in n
    for(originalNum=num; originalNum!=0; ++n){
        originalNum /= 10;
    }
    for(originalNum=num; originalNum!=0; originalNum/=10){
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }
   
    //if num = result , the number is armstrong
    if((int)result == num){
        printf("%d is a armstrong number", num);
    }else{
        printf("%d is not an armstron number",num);
    }
    return 0;
}