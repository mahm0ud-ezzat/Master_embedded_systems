/*
 ======================================================================================================================
 Name        :condition and loops assignment 
 Author      : mahmoud ezzat
 Description : Unit 2 C-Progtamming >> Assignment 2 condition and loops assignment >> EX2 C Program To vowel or consonant
 ======================================================================================================================
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char  x;
	printf("enter an alphabet : ");
	scanf("%c",&x);
    switch(x)
    {
    	case  'a':
    	case  'A':
    		{
    	printf("%c is a vowel ",x);
    	break ;
    		}
    	default :
    		{
    		printf("%c is a consonant ",x);
    		break;
    		}
    	case  'e':
    	case  'E':
    		{
    	printf("%c is a vowel ",x);
    	break ;
    		}
    	case  'i':
    	case  'I':
    		{
    	printf("%c is a vowel ",x);
    	break ;
    		}
    	case  'o':
    	case  'O':
    		{
    	printf("%c is a vowel ",x);
    	break ;
    		}
    	case  'u':
    	case  'U':
    		{
    	printf("%c is a vowel ",x);
    	break ;
    		}
    		
    		
	}
	return 0;
}

