/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX3 C Program To find transpose of a matrix 
 elements entered by user ;
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("enter row and column of matrix : ");
	int x,y,i,j;
	scanf("%d%d",&x,&y);
	
	int a[100][100];
		for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{ 
			printf("enter element a%d%d :  ",i,j);
			scanf ("%d",&a[i][j]);
			printf("\r\n");
		}
	}
	printf("enterd matrix : \r\n");
			for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{ 
		
			printf("%d  ",a[i][j]);
		}
		printf("\r\n");
	}
	 
	 
	 	printf("transpose  matrix : \r\n");
			for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{ 
		
			printf("%d  ",a[j][i]);
		}
		printf("\r\n");
	}
	
	return 0 ;
}

