#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int *ptr1= &arr[0];
    int *ptr2= &arr[1];
    int *ptr3= &arr[2];

    printf("%u\n",ptr1);
    printf("%u\n",ptr2);
    printf("%u",ptr3);

    return 0;
}