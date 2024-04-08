/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX2 C Program To calculate avg using array  
 elements entered by user ;
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i=0;
	float sum=0;
	printf("enter numbers of data \r\n");
	scanf("%d",&n);
	
	float arr1[100];

	for(i;i<n;i++)
	{
	
		printf("enter number : ");
		scanf("%f",&arr1[i]);
		sum+=arr1[i];
		
	}
	
	printf("\r\naverage = %f",sum/n);
	
	return 0 ;
	
}

