//7. Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
int findbig(int,int,int);
void main()
{
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