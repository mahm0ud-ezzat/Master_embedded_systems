/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX5 C Program To check character is alphabet or not 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char c ;
	printf("enter a character ");
	scanf("%c",&c);
	
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')) 
	{
		printf("%c is an alphabet ",c);
	}
	else 
	{
			printf("%c is not an  alphabet ",c);
	}
	
 return 0 ;
}
