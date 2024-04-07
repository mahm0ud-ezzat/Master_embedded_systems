/*
 ======================================================================================================================
 Name        : condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX6 C Program To calculte sum of natural number
 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n ,sum =0, i=1 ; 
	printf("enter an integer : ");
	scanf ("%d",&n); 
	// we can use this formula (n*(n+1))/2  but we applay on loop concept
	for(i;i<=n;i++)
	{
		sum+=i;
	}
	printf ("sum : %d",sum);
	
	
return 0; 
}
