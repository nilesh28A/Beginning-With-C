#include<stdio.h>
int main(){
    float number = 24.36541869;
    double num = 1.624635e-19;

    printf("number =%0.2f\n",number);
    printf("number =%e\n",number);

    printf("number =%lf\n",num);
    printf("number =%e",num);
    
    return 0;
}
