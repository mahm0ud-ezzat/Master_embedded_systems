/*
 ======================================================================================================================
 Name        : Assignment 1 C-Basic 
 Author      :mahmoud ezzat

 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> ex6>> c program to Swap Two Numbers 
 ======================================================================================================================
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   float a,b;
   printf("Enter value of a: " );
   scanf("%f",&a);
   printf("Enter value of b: " );
   scanf("%f",&b);
   float temb; 
   temb =a; 
   a=b;
   b=temb; 
    printf("After swapping, value of a %f\r\n",a );
     printf("After swapping, value of b %f",b );
   return 0 ;



}
