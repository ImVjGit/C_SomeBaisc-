#include<stdio.h>
#include<stdlib.h>
int evenodd(int *,int );
void main()
{ 	
int a[10];
int n,i,s;
		printf("enter the arry size here :  ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter the array value of array a[%d]:  ",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("\n a[%d]: %d ",i,a[i]);
			
		}
	s = evenodd(a,n);
	printf("\t %d",s);
}

int evenodd(int* a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n a[%d]:%d is even number ",i,a[i]);
		}
	}
	
		for(i=0;i<n;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("\n a[%d]:%d is odd number ",i,a[i]);
		}
	}
	
}
