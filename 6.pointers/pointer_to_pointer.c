#include<stdio.h>

int main(){
    int mehul = 24;
    int *radhepark = &mehul;
    int **yogichowk = &radhepark;

    printf("addres of mehul:-%d\n", radhepark);
     printf("addres of mehul:-%d\n", &mehul);
    printf("addres of radhepark:-%d\n", yogichowk);
    printf("addres of radhepark:-%d\n", &radhepark);
    printf("age of mehul:-%d\n",**yogichowk);
    printf("age of mehul:-%d",*radhepark);
  
    return 0;
}