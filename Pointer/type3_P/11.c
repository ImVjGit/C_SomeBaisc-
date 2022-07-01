//11. Find the factorial of any number
#include<stdio.h>
void Factorial(int*);
void main()
{
int num;
printf("\nEnter the number : ");
scanf("%d",&num);
Factorial(&num);
}
void Factorial(int* num)
{
int f;
int i=1;
for(f=1;i<=*num;i++)
{
f = f*i;
}
printf("Factorial is : %d\n",f);
}
