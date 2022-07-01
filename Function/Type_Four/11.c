//11. Accept a number with 1 or 2 digit from user and display it in words.
#include<stdio.h>
int displayinword(int,int);
void main()
{
int a ;
int num1 ,num2;
printf("Enter the First number :");
scanf("%d",&num1);
printf("Enter the Second number :");
scanf("%d",&num2);
printf("In Word : ");
displayinword(num1,num2);
printf("\n");
} int displayinword(int num1,int num2)
{ if (
num1<20)
{ if(num1 == 0)
printf("ZERO");
if(num1 == 1)
printf("one");
if(num1 == 2)
printf("two");
if(num1 == 3)
printf("three");
if(num1 == 4)
printf("four");
if(num1 == 5)
printf("five");
if(num1 == 6)printf("six");
if(num1 == 7)
printf("seven");
if(num1 == 8)
printf("eight");
if(num1 == 9)
printf("nine");
if(num1 == 10)
printf("ten");
if(num1 == 11)
printf("Eleven");
if(num1 == 12)
printf("Twelve");
if(num1 == 13)
printf("Thirteen");
if(num1 == 14)
printf("Fourteen");
if(num1 == 15)
printf("Fifteen");
if(num1 == 16)
printf("Sixteen");
if(num1 == 17)
printf("Seventeen");
if(num1 == 18)
printf("Eighteen");
if(num1 == 19)
printf("Nineteen");
if(num1 == 20)
printf("Twenty");
} else
{
printf("not valid ");
}
printf(" ");
if(num2<20)
{ if(num2 == 0)
printf("ZERO");
if(num2 == 1)
printf("one");
if(num2 == 2)
printf("two");
if(num2 == 3)
printf("three");
if(num2 == 4)
printf("four");
if(num2 == 5)
printf("five");
if(num2 == 6)
printf("six");
if(num2 == 7)
printf("seven");
if(num2 == 8)
printf("eight");
if(num2 == 9)
printf("nine");
if(num2 == 10)
printf("Ten");
if(num2 == 11)
printf("Eleven");
if(num2 == 12)
printf("Twelve");
if(num2 == 13)
printf("Thirteen");
if(num2 == 14)
printf("Fourteen");
if(num2 == 15)
printf("Fifteen");
if(num2 == 16)
printf("Sixteen");
if(num2 == 17)
printf("Seventeen");
if(num2 == 18)
printf("Eighteen");
if(num2 == 19)
printf("Nineteen");
if(num2 == 20)
printf("Twenty");
} else
{
printf("not valid ");
}}