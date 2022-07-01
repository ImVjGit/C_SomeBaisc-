//7. Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void findbig(int*,int*,int*);
void main()
{
int a,b,c;
printf("\tEnter the three number here :\n");
printf("\tEnter the First number A: ");
scanf("%d",&a);
printf("\tEnter the second number B: ");
scanf("%d",&b);
printf("\tEnter the third number C: ");
scanf("%d",&c);
findbig(&a,&b,&c);
}
void findbig(int* a, int* b, int* c)
{
printf("*******************************************\n");
if (*a>*b && *a>*c){
printf("\tA is max ");
printf("value is : %d \n",*a);
}else{
if (*b>*c && *b>*a){
printf("\tB is max ");
printf("value is : %d \n",*b);
}else{
if (*c>*b && *c>*a)
printf("\tC is max ");
printf("value is : %d \n",*c);
}
}
printf("*******************************************\n");
}
