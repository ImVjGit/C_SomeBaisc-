// 5. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
#include<stdio.h>
int less(int*);
int other(int*);
void main()
{
	int salary;
	int da,ta,hra;
	int t;
	printf("Enter the salary : ");
	scanf("%d",&salary);
		if(salary<=5000 )
		{
		t =less(&salary);
		printf("so salary is include Hra,Ta and Da : %d\n",t);
		}
		else{
		t = other(&salary);
		printf("so salary is include Hra,Ta and Da : %d\n",t);
		}
}

int less(int* salary)
{
	float da,ta,hra;
	int total;
	da = *salary * 10/100;
	ta = *salary * 15/100;
	hra = *salary *25/100;
	printf("you get 10 and 20 and 25 percent on Hra,Ta and Da \n");
	total = *salary + da + ta + hra;
	return total;
}
int other(int* salary)
{
	float da,ta,hra;
	int total;
	da = *salary * 15/100;
	ta = *salary * 25/100;
	hra = *salary * 30/100;
	printf("you get 15 and 25 and 30 percent on Hra,Ta and Da \n");
	total = *salary + da + ta + hra;
	return total;
}
