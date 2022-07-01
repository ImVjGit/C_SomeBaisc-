#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* ptr;
	int i;
	 ptr = (int*)malloc(20);
	 for(i=0;i<5;i++)
	 {
	 	printf("enter the value is : ");
	 	scanf("%d",&ptr[i]);
	 }
	 for(i=0;i<5;i++)
	 {
	 	printf("\t %d",ptr[i]);
	 }
	 
}
