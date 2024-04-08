/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX1 C Program To find sum of two matrix of order 2*2 using multi dimensional array 
 elements entered by user ;
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a[2][2];
	float b[2][2];
	printf("enter the element of first matrix \r\n");
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a%d%d ",i,j);
			scanf ("%f",&a[i][j]);
		}
	}
		printf("enter the element of second matrix\r\n ");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{ 
			printf("enter b%d%d ",i,j);
			scanf ("%f",&b[i][j]);
		}
	}
		printf("sum of matrix\r\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %0.f ",a[i][j]+b[i][j]);
		
		}
		printf("\r\n");
	}
	return 0 ;
}
