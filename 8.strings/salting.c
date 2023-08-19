#include<stdio.h>
#include<stdint.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);

}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass,password);   // newpass = "nilesh"
    strcat(newpass,salt);      // newpass = "nilesh123"
    puts(newpass);
}