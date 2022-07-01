#include<stdio.h>
void display(int*,int);
void main()
{
	int arr[5]={10,20};
	display(arr,5);
	
}

void display(int* p ,int t )
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("\t %d",p[i]);
	}
}
