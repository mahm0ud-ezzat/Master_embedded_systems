/*
 ======================================================================================================================
 Name        :  array and strings assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 3 array and strings >> EX5 C Program To wsearch an element in array 
 elements entered by user ;
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{ 
   int arr[100];
   int i=0,n,element_s,l ;
   printf("enter no of element : ");
   scanf("%d",&n); 
   
   for(i ;i<n ;i++)
   {
   	scanf("%d",&arr[i]);
   	
   }
    printf("\r\nenter thre element to be srearch : ");
   scanf("%d",&element_s);
   for(i=0 ;i<n;i++)
   {
   	 if(arr[i]==element_s)
   	    {
   	 	 l =i ;
   	 	 break; 
		}
   }
    printf("\r\nnumber found at the loacation = %d ",l+1);
    return 0 ;
}
