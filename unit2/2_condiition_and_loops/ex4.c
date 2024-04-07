/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX4 C Program To check whether a number is positive or negative 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x;
	printf("enter a number : ");
	scanf("%f",&x);
	
	if(x>0)
	{
		printf (" %f is positive",x);
	}
	else if (x==0)
	{
		printf("you entered zero");
	}
	else 
	{
	printf (" %f is negative ",x);	
	}
	return 0; 	
}


