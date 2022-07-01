#include<stdio.h>
void main()
{
	int arr[5]={10,20};
	int* ptr;
	int i;
	ptr = &arr;
	for(i=0;i<5;i++)
	{
		printf("\t %d",ptr[i]);
	}
}
