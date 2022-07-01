//6. Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
void fivep(int);
void tenp(int);
void main()
{
int price;
int five;
int total;
int tend;
printf("Get discount on price ");
printf("Enter the price : ");
scanf("%d",&price);
if(price<500)
{
fivep(price);
}
else
{
tenp(price);
}
}
void fivep(int price)
{
int five;
int total;
int tend;
five = price * 0.05;
total = price - five;
printf(" you get 5 Percent discount ");
printf("now price is %d",total);
printf("\n");
}
void tenp(int price )
{
int five;
int total;
int tend;
tend = price * 0.10;
total = price - tend;
printf(" you get 10 Percent discount ");
printf("now price is %d",total);
printf("\n");
}