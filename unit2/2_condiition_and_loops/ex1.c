/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX1 C Program To check whether an number is even or odd 
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	printf("enter an integer you want to check : ");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf (" %d is evev",x);
	}
	else 
	{
	printf (" %d is odd",x);	
	}
	return 0; 	
}

