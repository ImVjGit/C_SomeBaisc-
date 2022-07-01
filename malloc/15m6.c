#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* ptr;
	int i,n;
	printf("enter the array size :  ");
	scanf("%d",&n);
	 ptr = (int*)malloc(4*n);
	 for(i=0;i<n;i++)
	 {
	 	printf("enter the value of array %d  : ",i);
	 	scanf("%d",&ptr[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("\t %d",ptr[i]);
	 }
	 
}
