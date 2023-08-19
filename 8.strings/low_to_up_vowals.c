#include<stdio.h>
 int main()
 {
     char str[100];
     int i = 0;
     printf("C program to convert lower case volwel into upper case of String \n");
     printf("Please enter a string: ");
     scanf("%s", str);
     while( str[i] != '\0' )
     {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
           str[i] = str[i] - 32;
        }
        i++;
     }
     printf("Vowel after converting into upper case = %s", str);
     return 0;
 }