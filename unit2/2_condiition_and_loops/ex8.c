/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX8 C Program To make simple calculator
 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	float  x, y ;
	printf("enter operator either + or - or * or divide ");
	scanf("%c",&c);
	printf("\r\nenter two operands : ");
	scanf ("%f%f",&x,&y);
	switch (c)
	{
		case '*':
			
			{
			printf ("%f * %f = %f",x,y,x*y);
			break; 
			}
				case '-':
			
			{
			printf ("%f - %f = %f",x,y,x-y);
			break; 
			}
		   case '+':
			
			{
			printf ("%f + %f = %f",x,y,x+y);
			break; 
			}
				case '/':
			
			{
			printf ("%f / %f = %f",x,y,x/y);
			break; 
			}
			default :
			
			{
			printf ("error operter  please enter either + or - or * or divide  ");
			break; 
			}
			
	}
	return 0 ; 
	
	
}
