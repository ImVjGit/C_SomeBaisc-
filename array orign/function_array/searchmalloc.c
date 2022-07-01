//searching number (dynamic with main )
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* a;
	int n;
	int i;
	int num;
	printf("enter the arry number : ");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the array value of a[%d] :  ",i);
		scanf("%d",&a[i]);
	}
	printf("array value is : ");
		for(i=0;i<n;i++)
	{
		printf("\t  %d ",a[i]);
		
	}	
	
	 printf("\n\nEnter the number u want to search:  ");
		 scanf("%d",&num);
		 for(i=0;i<n;i++)
		 {
		 	if(a[i]==num)
			 {
			 	printf("\nNumber found : %d  ",a[i]);	
			 }else{
			 	printf("\n not found ");
			 	break;
			 }
		 } 
		
}
