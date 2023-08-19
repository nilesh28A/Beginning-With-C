#include<stdio.h>
void printh();      
void printg();          // function declaration / prototype

int main(){
    printh();
    printg();           // function call
    return 0;
}
void printh() {
    printf("Hello\n");       //function defination
                        
}
void printg(){
    printf("Good Bye");
}