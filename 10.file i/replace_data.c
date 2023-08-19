#include<stdio.h>
#include<string.h>
int main()
{
    //declaring the variables for the program
    char str[50], ch, i;
    
    //taking input string form the user
    printf("Enter any string: ");
    gets(str);
    
    //taking the replacing character from the user
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    //Replacing the vovewls from the characters
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = ch;
        }
    }
    
    //Printing the output string from to the user after replacing the character
    printf("\nNew String (after replacing vowel with %c) = %s", ch, str);
    
    return 0;
}