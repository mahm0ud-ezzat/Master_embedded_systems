/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Print_Sentence.c
 Author      :mahmoud ezzat

 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> ex7>> c program to Swap Two Numbers  without temp variable.
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
  
  a=a+b;
  b=a-b;
  a=a-b;
   printf("After swapping, value of a %f\r\n",a );
     printf("After swapping, value of b %f",b );
   return 0 ;



}
