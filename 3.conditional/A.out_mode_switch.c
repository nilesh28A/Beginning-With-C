#include<stdio.h>

int main(){
    char aout;
    printf("enter a character");
    scanf("%c",&aout);

    switch (aout)
    {
    case 'm' :
        printf("execute manual mod output code");
        break;

    case 'c'  :
        printf("execute controlling mode output");
        break;

    case 'p'  :
        printf("execute present value mode output");
        break;    

    case 's'  :
        printf("execute set value mode output");
        break;    
    
    default:
        printf("analog output is not available");
        break;
    }

    return 0;
}
