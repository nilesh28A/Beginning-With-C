#include<stdio.h>

void printNumbers(int arr[], int n);

int main(){
    int arr[]={1,2,3,4,5,6,8,10,16,20,25};
    printNumbers(arr,11);
    return 0;
}

void printNumbers(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}