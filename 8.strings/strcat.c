#include<stdio.h>
#include<string.h>

int main(){
    char firststr[] = "service ";
    char secstr[] = "software";
    strcat(firststr,secstr);
    puts(firststr);
    return 0;
}