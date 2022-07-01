//6 Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
void fivep();
void tenp();
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
 five = price * 0.05;
 total = price - five;
 fivep();
 }
 else
 {
 tend = price * 0.10;
 total = price - tend;
 tenp();
 }


}
void fivep()
{
printf(" you get 5 Percent discount ");
 printf("\n");
}
void tenp()
 {
printf(" you get 10 Percent discount ");
 printf("\n");
 }