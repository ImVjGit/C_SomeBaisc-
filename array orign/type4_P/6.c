//6. Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
int fivep(int*);
int tenp(int*);
void main()
{
int x , price,five,total,tend;
printf("Get discount on price \n");
printf("Enter the price : ");
scanf("%d",&price);
if(price<500)
{
	x = fivep(&price);
	printf("so price is : %d\n",x);
}
else
{
x = tenp(&price);
printf("so price is : %d\n",x);
}
}

int fivep(int* price)
{
	int five,total;
	five = *price * 0.05;
	total = *price - five;
	printf("you get 5 Percent discount ");
	return total;
}

int tenp(int* price)
{
	int tend;
	int total;
	tend = *price * 0.10;
	total = *price - tend;
	printf("you get 10 Percent discount ");
	return total;
}
