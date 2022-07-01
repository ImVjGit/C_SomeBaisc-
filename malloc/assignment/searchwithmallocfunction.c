//searching number (dynamic with main )
#include<stdio.h>
#include<stdlib.h>
int* search(int*,int);
void main()
{
	int* app;
	int f;
	int n;
	int i;
	printf("enter the arry number : ");
	scanf("%d",&n);
	
	app=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the array value of a[%d] :  ",i);
		scanf("%d",&app[i]);
	}
	printf("array value is : ");
		for(i=0;i<n;i++)
	{
		printf("\t  %d ",app[i]);
		
	}	
	
f = search(app,n);
printf(" And number is : %d ",f);
}

int* search(int* arr, int t)
{
	int num;
	int i;
			 printf("\n\nEnter the number u want to search:  ");
		 scanf("%d",&num);
		 for(i=0;i<t;i++)
		 {
		 	if(num==arr[i])
			 {
			 	printf("\nNumber found   ");
			 return num; 
			 
			 }
			
		 } 
}
