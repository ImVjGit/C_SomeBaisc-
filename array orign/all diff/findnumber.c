//7.searching number 
#include<stdio.h>
void search (int*,int);
void main()
{
	int n;
	int a[n];
	 int i ;
		printf("enter the array number :  ");
	 	scanf("%d",&n);
	 	
		for(i=0;i<n;i++)
		{
			printf(" \n array element is ");
			scanf("%d",&a[i]);
		}

		for( i=0;i<n;i++)
		{
			printf("%d ",a[i]);	
		}		
	 
	 search(a,n);
}

void search (int* a, int n)
{	int j;
int flag = 0;
int i;
	int find[j];
	printf("\n\nEnter a number which u want to search  :  ");
	 	scanf("%d",&find[j]);
	 
	 for(i=0;i<n;i++)
	 {
	  	if(find[j] ==  a[i])
	 	{
	 	
				flag = 1;
		
		 }
	 	
	}
	
	if(flag==1){
		printf("\n Number Found :  %d  ",find[j]);
	}else{
		printf(" Number not found ");
	}
		 	
	
}
