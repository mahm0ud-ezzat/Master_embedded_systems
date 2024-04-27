// function to calculete factorial by using recursion function ;;;;
#include<stdio.h>
int fac =1;
int factroial(int value);

int main()
{
	int a;
a= factroial(9);
printf("%d",a);

}
int factroial(int value)
{

	fac*=value;

	if(--value>0)
	{
		factroial(value);

	}

	return fac ;

}

// c program to reverse sentenses by using recursion ;

#include <stdio.h>

void reverseSentence()
{
    char c;
 
    scanf("%c", &c);

    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
      
    }
}

int main()
{
    printf("Program-3\n\n");
    printf("EX3: C Program To Reverse A Sentence Using Recursion: \n");

    printf("Enter a sentence: ");
    reverseSentence();

    printf("\n");
    return 0;
}
// c program to print prime numbers between intervels 
#include<stdio.h>
int is_prime(int x);
void prime_between_intervels(int y,int z);

int main()
{
prime_between_intervels(10,30);
}
int is_prime(int x)
{
  if(x>1)
  {
    int i ;
    for( i=2 ;i<x;i++)
    {
        if (x%i==0)
        {
            return 0;
        }
    }
    return 1;
  }
  else
  {
    return 0;
  }
 
}
 void prime_between_intervels(int y,int z)
 {
    int i ;
    printf("prime numbers between %d and %d are : ",y,z);
    for(i=y+1;i<z;i++)
    {
        if(is_prime(i))
        {
          printf(" %d ",i);
        }
    }
 }

 // c program to calculate the power of a number using recursion 
#include<stdio.h>
int result =1;
int calc_pow(int x ,int y);
int main()
{

int c,v;
printf("enter the base : ");
scanf("%d",&c);
printf("enter the power : ");
scanf("%d",&v);

int z ;
z =calc_pow(c,v);
printf("%d ^ %d = %d",c,v,z);

}
int calc_pow(int x ,int y)
{
   
   // x was the base 
    
    if(y-->0)
    {
        calc_pow(x,y);
       result*=x;
    }
    return result ; 
}
