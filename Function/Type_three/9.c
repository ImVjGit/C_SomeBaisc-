//9. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his
//choice, then based on that perform the desired operations.
#include<stdio.h>
void evenodd(int);
void calcu();
void cel(float);
void findbig(int,int,int);
void add(int,int);
void sub(int,int);
void mult(int,int);
void divi(int,int);
void Rem(int);
void main()
{
int a;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Even or odd \n\t 2 +-*/ \n\t 3 find cel \n\t 4 find big number \n
Choose any one : ");
scanf("%d",&a);
if(a==1){
int num;
printf("enter the number here : ");
scanf("%d",&num);
evenodd(num);
}else{
if(a==2){
calcu();
}else{
if(a==3){
float c,f;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c);
cel(c);
}else{
if(a==4){
int a,b,c;
printf("\tEnter the three number here :\n");
printf("\tEnter the First number A: ");
scanf("%d",&a);
printf("\tEnter the second number B: ");
scanf("%d",&b);
printf("\tEnter the third number C: ");
scanf("%d",&c);
findbig(a,b,c);
}else{
printf("invalid \n");
}
}
}
}
}
void evenodd(int num)
{
if(num%2==0){
printf("its even number : %d",num);
}
else{
printf("its odd number : %d", num);
}
}
void calcu()
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
printf("\t********Thank you **********\n");
}
void cel(float c )
{
float f ;
f = ((c*9)/5)+32;
printf("\t\tTemperature in Fahrenheit is : %f\n",f);
}
void findbig(int a, int b, int c)
{
printf("*******************************************\n");
if (a>b && a>c){
printf("\tA is max ");
printf("value is : %d \n",a);
}else{
if (b>c && b>a){
printf("\tB is max ");
printf("value is : %d \n",b);
}else{
if (c>b && c>a)
printf("\tC is max ");
printf("value is : %d \n",c);
}
}
printf("*******************************************\n");
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