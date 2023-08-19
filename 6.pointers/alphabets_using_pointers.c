#include<stdio.h>
#include<stdlib.h>

int main()
{

	char* c; 	// declare a character pointer
	c = (char*)malloc(sizeof(char));	// assigning memory to c

	*c = 'A';	// storing 'A' at the memeory that pointer c is pointing to

	// checking if the ASCII value of alphabet pointed by c
	// is less than equal to ASCII value of alphabet 'Z'
	while (*c <= 'Z') {

		printf("%c\n", *c);
		*c = *c + 1;	// increment the ASCII value of character that pointer c is pointing to

	}

}