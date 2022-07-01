//12 Factorial
#include<stdio.h>
void Factorial();
void main()
{
Factorial();
}
void Factorial()
{
 int num;
 int f;
 int i=1;
 printf("\nEnter the number : ");
 scanf("%d",&num);
 for(f=1;i<=num;i++)
 {
 f = f*i;
 }
 printf("Factorial is : %d \n",f);
}