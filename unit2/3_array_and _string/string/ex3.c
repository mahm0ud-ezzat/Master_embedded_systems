/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX1 C Program To reverse  a string 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[100];
	int i ;
	printf("enter the string ");
	gets(x);
	for(i=strlen(x)-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	return 0 ;
}

