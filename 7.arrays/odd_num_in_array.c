#include<stdio.h>

int countodd(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,6,9,7,6,8,9,2,3,4,5,3,1,7,9,5,6,9};
    printf("odd numbers:%d\n", countodd(arr,26));
    return 0;
}

int countodd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}