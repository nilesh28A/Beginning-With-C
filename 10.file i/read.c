#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("bhavu.txt","r");

    int ch;
    fscanf(fptr, "%d", &ch);
    printf("number=%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("number=%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("number=%d\n", ch);
    fclose(fptr);
    return 0;
}