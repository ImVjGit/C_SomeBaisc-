//9. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.
#include<stdio.h>
int evenodd(int);
float findingf(float);
int findbig(int,int,int);
int add(int,int);
int sub(int,int);
int mult(int,int);
int divi(int,int);
int Rem(int);
int less(int);
int other(int);
void main()
{
int a;
int salary;
int da,ta,hra;
int t;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Even or odd \n\t 2 +-*/ \n\t 3 find cel \n\t 4 find big number \n\t 5
Basic Salary \n Choose any one : ");
scanf("%d",&a);
if(a==1){
int num ;
int x;
printf("enter the number here : ");
scanf("%d",&num);
x = evenodd(num);
printf("%d\n",x);
}else{
if(a==2){
int a,num1,num2,total ,asum,subb,mu,di,ree;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4 Division \n\t 5
remender \n\n Choose any one : ");
scanf("%d",&a);
if(a==1){
printf("\nEnter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
asum = add(num1,num2);
printf("sum is : %d \n",asum);
}else{if(a==2)
{
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
subb = sub(num1,num2);
printf("Substration is: %d \n",subb);
}else{if(a==3)
{
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
mu = mult(num1,num2);
printf("Multification is : %d \n",mu);
}else{
if(a==4){
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
di=divi(num1,num2);
printf("Division is %d\n",di);
}else{
if(a==5){
printf("Enter the one number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
ree= Rem(num1);
printf("Remender is %d\n",ree);
}else
{
printf("invalid\n");
}
}
}
}
}
}else{
if(a==3){
float c;
int a;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c);
findingf(c);
printf("\t\tTemperature in Fahrenheit is : %f\n",c);
}else{
if(a==4){
int m,a,b,c;
printf("\t\tWelcome Find big number\n");
printf("\tEnter the three number here :\n");
printf("\tEnter the First number A: ");
scanf("%d",&a);
printf("\tEnter the second number B: ");
scanf("%d",&b);
printf("\tEnter the third number C : ");
scanf("%d",&c);
m = findbig(a,b,c);
printf("And number is : %d \n",m);
printf("\t\tThank you \n");
}else{
if(a==5){
printf("Enter the salary : ");
scanf("%d",&salary);
if(salary<=5000 )
{
t =less(salary);
printf("so salary is include Hra,Ta and Da : %d\n",t);
}
else{
t = other(salary);
printf("so salary is include Hra,Ta and Da : %d\n",t);
}
}else{
printf("invalid \n");
}
}
}
}
}
}
int evenodd(int num)
{
if(num%2==0){
printf("its even number : ");
return num;
}
else{
printf("its odd number ");
return num;
}
}
float findingf(float c )
{ int f;
f = ((c*9)/5)+32;
return f;
}
int findbig(int a, int b,int c)
{
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
int add(int num1, int num2)
{
int total;
total = num1 + num2 ;
return total;
}
int sub(int num1,int num2)
{
int total;
total = num1 - num2 ;
return total;
}
int mult(int num1 ,int num2)
{
int total;
total = num1 * num2 ;
return total;
}
int divi(int num1,int num2 )
{
int total;
total = num1 / num2 ;
return total;
}
int Rem(int num1)
{
int total;
total = num1 % 10 ;
return total;
}
int less(int salary)
{
float da,ta,hra;
int total;
da = salary * 10/100;
ta = salary * 15/100;
hra = salary *25/100;
printf("you get 10 and 20 and 25 percent on DA,Ta and Hra \n");
total = salary + da + ta + hra;
return total;
}
int other(int salary)
{
float da,ta,hra;
int total;
da = salary * 15/100;
ta = salary * 25/100;
hra = salary * 30/100;
printf("you get 15 and 25 and 30 percent on DA,Ta and Hra \n");
total = salary + da + ta + hra;
return total;
}