/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX3 C Program To find the largest number among theree numbers 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x,y,z;
	printf("enter three numbers : ");
	scanf("%f%f%f",&x,&y,&z);
	if (x>=y&&x>=z)
	{
		printf("largest number = %f",x);
	}
	else if (z>=y&&z>=x)
	{
		printf("largest number = %f",z);
	}
	else 
	{
		printf("largest number = %f",y);
	}
	return 0 ;
	 
}
