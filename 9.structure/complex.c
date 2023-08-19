#include<stdio.h>
#include<string.h>

struct complex{
   int real;
   int img;
};

int main(){
    struct complex n1 = {9,8};
    struct complex *ptr = &n1;
    printf("real part =%d\n",ptr->real);
    printf("img part =%d\n",ptr->img);

    return 0;
}