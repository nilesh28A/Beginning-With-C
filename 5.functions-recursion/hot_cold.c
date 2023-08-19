#include<stdio.h>
void Hot();
void Cold();

int main(){
    int temp;
    printf("enter your enviromental Temp:-");
    scanf("%d",&temp);

    if(temp>=38){
        Hot();
    } else if (temp<38){
        Cold();                      
    }
    return 0;
}

void Hot(){
    printf("Enviroment is HOT\n");

}

void Cold(){
    printf("Enviroment is COLD");
}