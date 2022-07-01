//8 Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
int add();
int sub();
int mult();
int divi();
int input();
int Rem();
void main()
{
int a ;
a = input ();
printf("%d\n",a);
printf("\t********Thank you **********\n");
} int input()
{
int a;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4 Division \n\t 5
remender \n Choose any one : ");
scanf("%d",&a);
if(a==1){
add();
}else{if(a==2)
{
sub();
}else{if(a==3)
{
mult();
}else{
if(a==4){
divi();
}else{
if(a==5){
Rem();
}else
{
printf("invalid\n");
}
}
}
}
}
}
int add()
{
int num1,num2,total;
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
total = num1 + num2 ;
printf( "Addtion is : ");
return total;
}
int sub()
{
int num1 ,num2,total;
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
total = num1 - num2 ;
printf( "Substration is : ");
return total;
}
int mult()
{
int num1 ,num2,total;
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
total = num1 * num2 ;
printf( "Multiplication is : ");
return total;
}
int divi()
{
int num1 ,num2,total;
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
total = num1 / num2 ;
printf( "Division is : ");
return total;
}
int Rem()
{
int num1 ,num2,total;
printf("Enter the one number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
total = num1 % 10 ;
printf( "Division is : ");
return total;
}