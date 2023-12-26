#include<stdio.h>

int main(){
    char ch1 = 'A';
    char ch2 = 'Z';
    char *ptr1 = &ch1;
    char *ptr2 = &ch2;

    for(char i=*ptr1; i<=*ptr2; i++){
        printf("%c\n",i);
    }
}