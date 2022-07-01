//searching number 
#include<stdio.h>
void main()
{
	int n;
	int a[n];
	 int i ,j;
	 int find[j];
	 int flag = 0;
	 
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
	 
	 printf("\n\nsearch the number :  ");
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
