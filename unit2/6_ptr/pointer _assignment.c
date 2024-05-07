// ex1 : c program to to demonstrate how to handle the pointers /in the program.

#include<stdio.h>
int main()
{
    int m ;
    int*ab;

    m=29;
    printf("address of m  : %p \r\n",(void*)&m);
    printf("value of m : %d \r\n",m);
    ab = &m ;
    printf("now ab is assigned with the address  of m\r\n ");
    printf("address of pointer ab : %p \r\n",ab);
    printf("content  of pointer ab : %d \r\n",*ab);
    *ab =34; 
    printf("The value of m assigned to 34 now\r\n");
    printf("address of pointer ab : %p\r\n",ab);
    printf("content of the pointer ab : %d\r\n",*ab);
    m=7 ;
    printf("the value of m is assigned to 7 now \r\n  ");
    printf("address of m :  %p \r\n",ab);
    printf("the value of m : %d",m);




    
return 0 ;
}
//**********************************************************************************************************************************************//

// ex 2 : c program to print all the alphabets using a pointer

#include<stdio.h>
int main()
{
char c ='A';
char *ptr =&c;
int i =0 ;
while(((*ptr)+i)!='Z')
{
printf("%c  ",*ptr+i);
i++;
}
printf("%c",'z');
return 0 ;

}
//***********************************************************************************************//
 /* 
 ex3 : Write a program in C to print a string in reverse using a pointer
*/
#include<stdio.h>
#include<string.h>
int main()
{

  char x [50];
  char *ptr1=x,*ptr2;
  int i =0;
  printf("input a string : ");
  gets(x);
  int v =strlen(x);
  ptr2=&x[v-1];
 while(ptr1<ptr2)
 {
    char temp;
    temp= *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    ptr1++;
    ptr2--;
  }
  printf("  \r\n%s  ",x);

}


//***********************************************************************************************//
    /* ex4 : Write a program in C to print the elements of an array in reverse 
order ;

*/
#include<stdio.h>

int main()
{

// we can use the same algoratim of the last example  :)


int arr [15];
int i = 0 ,n ; 
int*ptr ; 
ptr =arr ;
printf("enter number of element to store in the array (max 15) : "); 
scanf("%d",&n);
printf("\r\n enter %d number of element in the array : \r\n",n); 

for(i = 0 ; i<n ;i++ )
{
  printf("\r\nelement - %d : ",i+1);
  scanf("%d",ptr);
  ptr++;
}
printf("the elment of array in revese order are : \r\n"); 
ptr--; // beacuse in last iteration it was add to one so it point tp the next 4 byte in the men=mmory :)
for(i=n ;i>0;i--)
{
  printf("\r\n elment - %d : ",*ptr );
  ptr--;
}
return 0;

}
//***********************************************************************************************//
    /* ex5:  
    Write a program in C to show a pointer to an array which contents 
are pointer to structure.

*/
#include<stdio.h>

typedef struct employee 
{
  char name [50];
  int id ;
} emp ;

int main()
{

  emp e1={"ahmed",3000},e2={"mahmoud",8089},e3={"ali",4490};
  emp *ptr[]= {&e1,&e2,&e3};
  emp **ptr1 = ptr;
  printf ("e1 : %s   his id is %d\r\n",ptr1[0]->name,ptr1[0]->id);
  printf("e2 : %s his id is %d\r\n",ptr1[1]-> name ,ptr1[1]->id);
  printf(" e3 : %s  his id is %d \r\n ",(*ptr[2]).name,(*ptr[2]).id );

}




































