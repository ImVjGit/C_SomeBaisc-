//8. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void add(int,int);
void sub(int,int);
void mult(int,int);
void divi(int,int);
void Rem(int);
void main()
{
int a;
int num1,num2;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4 Division \n\t 5
remender \n Choose any one : ");
scanf("%d",&a);
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
if(a==1){
add(num1,num2);
}else{if(a==2)
{
sub(num1,num2);
}else{if(a==3)
{
mult(num1,num2);
}else{
if(a==4){
divi(num1,num2);
}else{
if(a==5){
Rem(num1);
}else
{
printf("invalid\n");
}
}
}
}
}
}
void add(int num1,int num2)
{
int total;
total = num1 + num2 ;
printf( "Addtion is : %d \n",total);
}
void sub(int num1,int num2)
{
int total;
total = num1 - num2 ;
printf( "Substration is : %d \n",total);
}
void mult(int num1,int num2)
{
int total;
total = num1 * num2;
printf( "Multiplication is : %d \n",total);
}
void divi(int num1,int num2)
{
int total;
total = num1 / num2 ;
printf( "Division is : %d \n",total);
}
void Rem(int num1)
{
int total;
total = num1 % 10 ;
printf( "Division is : %d \n",total);
}