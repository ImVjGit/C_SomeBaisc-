//9 Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.
#include<stdio.h>
int evenodd();
int calcu();
int cel();
int big();
int add();
int sub();
int mult();
int divi();
int Rem();
int input();
void main()
{
int a;
a= input();
printf(":->> %d \n",a);
}
int input()
{
int a;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Even or odd \n\t 2 +-*/ \n\t 3 find cel \n\t 4 find big number \
n Choose any one : ");
scanf("%d",&a);
if(a==1){
evenodd();
}else{
if(a==2){
calcu();
}else{
if(a==3){
cel();
}else{
if(a==4){
big();
}else{
printf("invalid \n");
}
}
}
}
}
int evenodd()
{
int num ;
printf("enter the number here : ");
scanf("%d",&num);
if(num%2==0){
printf("its even number : ");
return num;
}
else{
printf("its odd number : ");
return num;
}
}
int calcu()
{
int a;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4
Division \n\t 5 remender \n Choose any one : ");
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
} int cel()
{
int c,f;
printf("\t\tEnter the Celsius: ");
scanf("%d",&c);
f = ((c*9)/5)+32;
printf("\t\tTemperature in Fahrenheit is : ");
return f;
} int big()
{
int a,b,c;
printf("\tEnter the three number here :\n");
printf("\tEnter the First number: ");
scanf("%d",&a);
printf("\tEnter the second number: ");
scanf("%d",&b);
printf("\tEnter the third number: ");
scanf("%d",&c);
int max;
if (a>b && a>c){
printf("\ta is max ");
return a;
}else{
if (b>c && b>a){
printf("\tb is max ");
return b;
}else{
if (c>b && c>a)
printf("\tc is max ");
return c;
}
}}
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