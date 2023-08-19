
#include<stdio.h>

void printH(int count);

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    printH(n);

    return 0;
}
  // recursive function
void printH(int count){
    if (count==0){
        return;
    }
    printf("Hello Multispan\n");
    printH(count-1);
}