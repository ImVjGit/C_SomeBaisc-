//12 Find out the Factorial of any number  ? 
#include <stdio.h>
int factorial(int*);
void main()
{
	int f ,ans ;
	printf("\n Enter the number :  ");
	scanf("%d",&f);
	ans = factorial(&f);	
	printf("\n %d Factorial is : %d\n",f,ans);
}

int factorial(int* a)
{
	int f;
int i=1;
for(f=1;i<= *a;i++)
{
f = f*i;
}
	
return f;
	
}
