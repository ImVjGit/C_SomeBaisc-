#include<stdio.h>
void display(int*,int);

void main()
{
	int arr[5]={10,20};
	display(arr,5);	
}

void display(int* ptr, int t)
{
	int i ;
	for(i=0;i<5;i++)
	{
		printf("\n%d",ptr[i]);
	}
}
