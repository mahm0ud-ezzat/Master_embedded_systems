// ex 1 c program to store information (name,rolland marks) of student using structure
#include<stdio.h>
 struct Sstudent
{
 char name[50];
 int roll_number; 
 float marks; 
}; 

int main()
{
struct Sstudent s1;
printf("enter information of student: \r\n enter name :");
gets(s1.name);
printf("\r\nenter roll number : " );
scanf("%d",&s1.roll_number); 
printf("\r\n enter marks : ");
scanf("%f",&s1.marks);
printf("\r\n Displaying Information : \r\n");
printf("name : %s \r\n Roll : %d  \r\n marks : %0.2f",&s1.name,s1.roll_number,s1.marks);
return 0; 

}

// c program to add two distances (in inches-feet) system using structure
//1 feet =12 inches
#include<stdio.h>
struct distance
{
float feet;
float inches; 
};

struct distance  read();
struct distance sum_dis(struct distance s1,struct distance s2);

int main()
{
struct distance d1,d2,sum;
printf("enter information for first distance feet then inches  : \r\n");
d1 =read();
printf("enter information for second distance feet then inches  : \r\n");
d2=read();
sum = sum_dis(d1,d2);
printf("sum of distance = %0.0f - %0.1f",sum.feet,sum.inches);
return 0; 

}
struct distance read()
{
    struct distance s1;
    printf ("please enter distance in feet\r\n");
    scanf("%f",&s1.feet);
    printf("please enter distance in inches\r\n");
    scanf("%f",&s1.inches);
    return s1;
}
struct distance sum_dis(struct distance s1,struct distance s2)
{
//feet =12 inches 
struct distance s3;
s3.feet=s1.feet+s2.feet; 
s3.inches =s1.inches+s2.inches;

while((s3.inches-12)>0)
{
    s3.feet++;
    s3.inches-=12;
}
return s3;
}
// c program to add two complex numbers by passing structure to a function 
#include<stdio.h>
struct Scomplex
{
float imagin;
float real; 
};
 void read_complex( struct Scomplex *c1);
 struct Scomplex sum_complex(struct Scomplex *c2,struct Scomplex *c3);

int main()
{
   struct Scomplex s1,s2,sum_c; 
   printf("please enter 1st complex numbers : \r\n");
   read_complex(&s1);
    printf("please enter 2nd complex numbers : \r\n");
    read_complex(&s2);
    sum_c = sum_complex(&s1 , &s2) ;
    printf("\r\nsum = %0.1f + %0.1fi ",sum_c.real,sum_c.imagin);



}
void read_complex( struct Scomplex *c1)
{
      printf("\r\nplease enter the real part: ");
    scanf("%f",&c1->real);

    printf("please enter the imagine part: ");
    scanf("%f",&c1->imagin);
    


}
struct Scomplex sum_complex(struct Scomplex *c2,struct Scomplex *c3)
 {
    struct Scomplex c4;
    c4.imagin = c2->imagin+c3->imagin;
    c4.real =c2->real+c3->real;
    return c4;

 }
