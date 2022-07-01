//10 Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.
#include<stdio.h>
int nonstud(int*);
int stud(int*);
void main()
{
	int y;
	int v;
	int price;
	printf( "you are studnet ( yes(1) or no(2) ):");
	scanf ("%d",&v);
	if(v == 1)
	{
	printf ("you are student so u will get discount \n");
	printf("enter the price here :");
	scanf("%d",&price);
	y =stud(&price);
	printf("price is : %d\n",y);
	}else{
	if(v == 2){
	printf ("you are non-student so u will get discount \n");
	printf("enter the price here :");
	scanf("%d",&price);
	v= nonstud(&price);
	printf("price is : %d\n",v);
	} else{
	printf("invalid option \n");
	}
	}
}

int stud(int* price)
{
	int final,total;
	if(*price>500)
	{
	final = *price * 0.2;
	total = *price -final;
	printf(" you are student and you get 20Percent off bcz price is more than 500 \n");
	return total;
	}else
	{
	final = *price * 0.1;
	total = *price -final;
	printf(" you are student and you get 10 Percent off bcz of price is less than 500 \n");
	return total;
	}
}

int nonstud(int* price)
{
	int final,total;
	if(*price>600)
	{
	final = *price * 0.15;
	total = *price -final;
	printf("price is more the 600 so u get 15 Percent discount \n");
	return total;
	}else
	{
	printf("Sorry u are not valid for discount\n");
	return *price;
	}
}
