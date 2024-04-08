/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX1 C Program To find the frequancy of char in a string 
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[100]; 
	int i = 0,counter = 0 ;
	char c ;
	printf("enter  a string : ");
    gets(x);

	printf("\r\n enter  a char to find frequancy : ");\
	scanf("%c",&c);
	
	for(i ;i<strlen(x);i++)
	{
		if (x[i]==c)
		{
			counter ++;
		}
	}
	printf("frequancy of %c = %d ",c,counter);
	
	
}
