/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX4 C Program To insert an element in an array 
 elements entered by user ;
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	 int x,i ,in,l;
	 printf("enter no of element");
	 scanf("%i",&x);
	 int arr[1000];
	 for(i=0;i<x;i++)
	 {
         scanf("%i",&arr[i]);
	 }
	 printf("enter the element to be insert \r\n");
	 scanf("%i",&in); 
     printf("enter the location "); 
	 scanf("%i",&l);
	 for(i =x-1;i>0;i--)
	 {
		arr[i+1]=arr[i];
		if(arr[i]==l)
		{
			arr[i]=in;
		}

	 }
	 for(i=0;i<x;i++)
	 {
         printf("%i ",arr[i]);
	 }



}
