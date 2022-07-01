//5. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20%
//and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
#include<stdio.h>
void less(int*);
void other(int*);
void main()
{
int salary;
int da,ta,hra;
int total;
printf("Enter the salary : ");
scanf("%d",&salary);
if(salary<=5000 )
{
less(&salary);
}
else{
other(&salary);
}
}

void less(int* salary)
{
int da,ta,hra;
int total;
da = *salary * 10/100;
ta = *salary * 15/100;
hra = *salary *25/100;
total = *salary + da + ta + hra;
printf("you get 10 and 20 and 25 percent on Ta,Da and Hra\n");
printf("total salary on basic is : %d",total);
printf("\n");
}

void other(int* salary)
{
int da,ta,hra;
int total;
da = *salary * 15/100;
ta = *salary * 25/100;
hra = *salary * 30/100;
total = *salary + da + ta + hra;
printf("you get 15 and 25 and 30 percent on Ta,Da and Hra \n");
printf("total salary on basic is : %d",total);
printf("\n");
}
