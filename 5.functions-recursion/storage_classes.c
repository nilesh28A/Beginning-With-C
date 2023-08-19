#include<stdio.h>

void myfun1();

int main(){

    myfun1();

    myfun1();

    myfun1();

    myfun1();

return 0;
}
void myfun1(void){

    static int count=0;     // make a variable to globle but only for privete fun....
    count=count+1;
    printf("%d\n", count);
}

