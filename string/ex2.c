/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX1 C Program To find the length of  a string 
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[100];
	int i =0, counter =0; 
	printf("enter a string : ");
	gets(x);
	while (x[i]!=0)
	{
		counter ++ ;
		i++;
	}
	
	printf("length of strig : %d",counter);
	
	
	
}
