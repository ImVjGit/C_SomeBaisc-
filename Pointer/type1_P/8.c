//8 Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations
#include<stdio.h>
void add();
void sub();
void mult();
void divi();
void Rem();
void main()
{
 int a;
 printf("\t**********Menu**********:\n");
 printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4 Division \n\t 5
remender \n Choose any one : ");
 scanf("%d",&a);
 if(a==1)
 add();
 if(a==2)
 sub();
 if(a==3)
 mult();
 if(a==4)
 divi();
 if(a==5)
 Rem();
 printf("\t********Thank you **********\n");
}
 void add()
 {
 int num1 ,num2,total;
 printf("Enter the two number here :\n");
 printf("Enter the First number: ");
 scanf("%d",&num1);
 printf("Enter the Second Number : ");
 scanf("%d",&num2);
 total = num1 + num2 ;
 printf( "Addtion is : %d\n", total);
 }
 void sub()
 {
 int num1 ,num2,total;
 printf("Enter the two number here :\n");
 printf("Enter the First number: ");
 scanf("%d",&num1);
 printf("Enter the Second Number : ");
 scanf("%d",&num2);
 total = num1 - num2 ;
 printf( "Substration is : %d\n", total);
 }
 void mult()
 {
 int num1 ,num2,total;
 printf("Enter the two number here :\n");
 printf("Enter the First number: ");
 scanf("%d",&num1);
 printf("Enter the Second Number : ");
 scanf("%d",&num2);
 total = num1 * num2 ;
 printf( "Multiplication is : %d\n", total);
 }
 void divi()
 {
 int num1 ,num2,total;
 printf("Enter the two number here :\n");
 printf("Enter the First number: ");
 scanf("%d",&num1);
 printf("Enter the Second Number : ");
 scanf("%d",&num2);
 total = num1 / num2 ;
 printf( "Division is : %d\n", total);
 }
 void Rem()
 {
 int num1 ,num2,total;
 printf("Enter the one number here :\n");
 printf("Enter the First number: ");
 scanf("%d",&num1);
 total = num1 % 10 ;
printf( "Division is : %d\n", total);
 }
