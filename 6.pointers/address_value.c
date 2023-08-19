#include<stdio.h>

int main(){
    int phone=21;
    int *mi=&phone;
    int vivo=*mi;

   printf("%u\n",mi);    //address of phone
    printf("%u\n",&mi);  //addres of mi (pointer)
    printf("%d",*mi);    // value of that address can be stored
    return 0;
}