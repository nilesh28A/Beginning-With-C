#include<stdio.h>
#include<string.h>

int countvowals(char str[]);

int main(){
    char str[] = "hellowworld";
    printf("vowals are %d",countvowals(str));
  
    return 0;
}

int countvowals(char str[]){
    int count = 0;

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    } 
    return count; 
}