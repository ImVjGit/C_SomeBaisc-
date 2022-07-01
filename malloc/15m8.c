#include<stdio.h>
#include<stdlib.h>
int* myfun(int*,int );
void main()
{
int n,i;
int* ptr;
int p;

		printf("enter the array size :  ");
	scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	printf("enter the value of array %d  : ",i);
	 	scanf("%d",&ptr[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("\t %d",ptr[i]);
	 }
	 
	 
	 p = myfun(ptr,n);
	 
}

int* myfun(int* ptr,int n )
{

	
		 ptr = (int*)malloc(sizeof ( int )*n);
		 
		 return ptr ;
}
