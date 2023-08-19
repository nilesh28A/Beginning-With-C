#include<stdio.h>

float square(float side);
float circal(float rad);
float ractangle(float a, float b);

int main(){
    float a=5, b=10, side=15, rad=6.4;

    printf("area of ractangle:%f\n", ractangle(a,b));
    printf("area of circal:%f\n", circal(rad));
    printf("area of square:%f\n", square(side));
    return 0;
}

float square(float side) {
    return side*side;
}
float circal(float rad){
    return rad*rad*3.14;
}
float ractangle(float a, float b){
    return a*b;
}