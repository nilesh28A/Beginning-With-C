#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("nil.txt","r");
    fclose(fptr);
    return 0;
}