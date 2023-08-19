#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("nil.txt","w");

    fprintf(fptr,"%c","M");
    fprintf(fptr,"%c","n");
    fprintf(fptr,"%c","g");
    fprintf(fptr,"%c","e");
    fprintf(fptr,"%c","o");
    
    fclose(fptr);
    return 0;
}