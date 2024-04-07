/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX7 C Program To find factorial of a number 
 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n ,fac=1, i=1 ; 
	printf("enter an integer : ");
	scanf ("%d",&n);
	if (n==0)
	{
	
		printf("factorial = 1 ");
		
	 } 
	 
	 else if (n<0)
	 {
	 	printf("Error!!!! factorial of negative number dose not exist");
	 }
	 else
	 {
	 	for(i ;i<=n;i++)
	 	{
	 		fac*=i;
	 		
		 }
		 printf("factorial = %d",fac);
	 }
	 return 0 ;
}
