//8. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.
#include<stdio.h>
int add(int*,int*);
int sub(int*,int*);
int mult(int*,int*);
int divi(int*,int*);
int Rem(int*);
void main()
{
int a,num1,num2,total ,asum,subb,mu,di,ree;
printf("\t**********Menu**********:\n");
printf("\n\t 1 Addition \n\t 2 Substraction \n\t 3 Multiplication \n\t 4 Division \n\t 5remender \n\n Choose any one : ");
scanf("%d",&a);
if(a==1){
printf("\nEnter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
asum = add(&num1,&num2);
printf("sum is : %d \n",asum);
}else{if(a==2)
{
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
subb = sub(&num1,&num2);
printf("Substration is: %d \n",subb);
}else{if(a==3)
{
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
mu = mult(&num1,&num2);
printf("Multification is : %d \n",mu);
}else{
if(a==4){
printf("Enter the two number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the Second Number : ");
scanf("%d",&num2);
di=divi(&num1,&num2);
printf("Division is %d\n",di);
}else{
if(a==5){
printf("Enter the one number here :\n");
printf("Enter the First number: ");
scanf("%d",&num1);
ree= Rem(&num1);
printf("Remender is %d\n",ree);
}else
{
printf("invalid\n");
}
}
}
}
}
}
int add(int* num1, int* num2)
{
int total;
total = *num1 + *num2 ;
return total;
}
int sub(int* num1,int* num2)
{
int total;
total = *num1 - *num2 ;
return total;
}
int mult(int* num1 ,int* num2)
{
int total;
total = *num1 * *num2 ;
return total;
}
int divi(int* num1,int* num2 )
{
int total;
total = *num1 / *num2 ;
return total;
}
int Rem(int *num1)
{
int total;
total = *num1 % 10 ;
return total;
}
