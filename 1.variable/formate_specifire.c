#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:=");

    /*  %c = character
        %h = short
        %d = integer
        %ld = long
        %lld = long long
        %u = unsingnd 
        %f = float
        %lf = double
        %e = sintific float
        %le = sintific double
        %p = pointer
        %s = string
        %x = hexadecimal
        %o = Octal
    */

    scanf("%d", &age);
    printf("Your age is:=%d", age);
    return 0;
}
