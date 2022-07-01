//7 Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
int findbig();
void main()
{
int a ;
printf("\t\tWelcome Find big number\n");
a = findbig();
printf("And number is : %d \n",a);
printf("\t\tThank you \n");
} int findbig()
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