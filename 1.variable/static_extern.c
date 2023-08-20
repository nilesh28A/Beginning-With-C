#include<stdio.h>

void myFun1(void);
 
int main(){
myFun1();                        
myFun1();
myFun1();
myFun1();
}

void myFun1(void){                           // improove the privicy
    static int count = 0;        // globle variable that is private to a function
    count = count + 1;               
    printf(" tolat existing fun = %d\n",count);
}

                  // also use for function to make private for perticular file

    // Extern use for access globle variable outside the scope of file. also for function
      // extend the visibility of variable or function