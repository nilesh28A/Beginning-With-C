#include<stdio.h>

float calPer(float sc, float mth, float phy);

int main(){
    float science, maths, physics;
    printf("Enter mark of science:--\n");
    scanf("%f", &science);
    printf("Enter mark of Maths:--\n");
    scanf("%f", &maths);
    printf("Enter mark of Physics:--\n");
     scanf("%f", &physics);
    printf("percentage is--%f",calPer(science, maths, physics));
    return 0;

}

float calPer(float sc, float mth, float phy){
    return ((sc+mth+phy)/3);
}