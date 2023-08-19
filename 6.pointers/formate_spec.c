#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;

    // address
    printf("%p\n", &age);   //pointer
    printf("%u\n", &age);   // unsinged integer

    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);     // value
    printf("%d", *(&age));

    return 0;
}
