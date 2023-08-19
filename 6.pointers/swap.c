#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=10, y=15;
    _swap(&x,&y);
    printf("x=%d & y=%d\n",x,y);
    return 0;
}
// call by refference
void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
   printf("a=%d & b=%d\n",*a,*b);
}
