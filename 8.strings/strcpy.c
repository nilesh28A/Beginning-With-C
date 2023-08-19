#include<stdio.h>
#include<string.h>

int main(){
    char oldstr[] = "service";
    char newstr[] = "software";
    strcpy(oldstr,newstr);
    puts(oldstr);
    return 0;
}