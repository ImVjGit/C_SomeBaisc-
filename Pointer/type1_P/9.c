//9 Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.
#include<stdio.h>
 void evenodd();
 void calcu();
 void cel();
 void big();
 void add();
void sub();
void mult();
void divi();
void Rem();
void main()
{
 int a;
 printf("\t**********Menu**********:\n");
 printf("\n\t 1 Even or odd \n\t 2 +-*/ \n\t 3 find cel \n\t 4 find big number \n
Choose any one : ");
 scanf("%d",&a);
 if(a==1)
 evenodd();
 if(a==2)
 calcu();
 if(a==3)
 cel();
 if(a==4)
 big();
}
void evenodd()
{
 int num ;
 printf("enter the number here : ");
 scanf("%d",&num);
 if(num%2==0){
 printf("its even number : %d\n",num);
 }
 else{
 printf("its odd number : %d\n",num);
 }
}
void calcu()
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
void cel()
{
 int c,f;
 printf("\t\tEnter the Celsius: ");
 scanf("%d",&c);
 f = ((c*9)/5)+32;
 printf("\t\tTemperature in Fahrenheit is : %d\n",f);
}
void big()
{
 int n1,n2,n3;
 printf("\tEnter the three number here :\n");
 printf("\tEnter the First number: ");
 scanf("%d",&n1);
 printf("\tEnter the second number: ");
 scanf("%d",&n2);
 printf("\tEnter the third number: ");
 scanf("%d",&n3);
 n1>n2?(n1>n3?printf(" \tFirst number is max %d\n",n1):printf("\tThird number
is big %d \n",n3)):(n2>n3?printf("\tSecond number is max %d \n",n2 ):printf("\tThird number is
max%d \n",n3));
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
