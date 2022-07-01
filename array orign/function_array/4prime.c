// 4. Find all prime number in array 
#include <stdio.h>
void prime(int* ,int );
void main()
{
	int arr[10];
	int i,s;
	printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 			
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&arr[i]);
				}
	

	prime(arr,s);
}

void prime(int* arr ,int s )
{
	int i;
	
		for(i=0;i<s;i++)
	{
			     	int j=2;
		int flag = 1 ;
			          while (j < arr[i]) {
			           if (arr[i] % j == 0) {
			               flag = 0;
			               break;
			           }
			           j++;
			       }
			       if (flag == 1) {
			           printf("\tPrime number is :  %d \n", arr[i]);
			       }
				   else{
			       	
					   printf("\tNon-prime is:  %d \n",arr[i]);
				   }
			   }
}
