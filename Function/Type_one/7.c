//7 Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void findbig();
void main()
{
 printf("\t\tWelcome Find big number\n");
 findbig();
 printf("\t\tThank you \n");
}
void findbig()
{
 int n1,n2,n3;
 printf("\tEnter the three number here :\n");
 printf("\tEnter the First number: ");
 scanf("%d",&n1);
 printf("\tEnter the second number: ");
 scanf("%d",&n2);
 printf("\tEnter the third number: ");
 scanf("%d",&n3);
 n1>n2?(n1>n3?printf(" \tFirst number is max %d\n",n1):printf("\tThird number is big
%d \n",n3)):(n2>n3?printf("\tSecond number is max %d \n",n2 ):printf("\tThird number is max%d \
n",n3));
}