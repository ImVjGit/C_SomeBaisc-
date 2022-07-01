//5 Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
#include<stdio.h>
void less();
void other();
int input();
void main()
{
int a;
printf("salary is %d \n",input());
}
int input()
{
int salary;
int da,ta,hra;
int total;
printf("Enter the salary : ");
scanf("%d",&salary);
if(salary<=5000 )
{
da = salary * 10/100;
ta = salary * 15/100;
hra = salary *25/100;
less();
}
else{
da = salary * 15/100;
ta = salary * 25/100;
hra = salary * 30/100;
other();
}
total = salary + da + ta + hra;
return total;
}
void less()
{
printf("you get 10 and 20 and 25 percent discount \n");
}
void other()
{
printf("you get 15 and 25 and 30 percent discount \n");
}