//5 Create two arryas of integers. Add following Method 
// a. Accept the data for an array.
// b. Display data of the array.
// c. summation of two array. 
//(dynamic with main only)
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* arr;
	int* brr;
	int* crr;
	int ans;
	int i,s;
	printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 	arr = (int*)malloc(s*sizeof(int));		
		brr = (int*)malloc(s*sizeof(int));
		crr = (int*)malloc(s*sizeof(int));
	printf("\n Array 1 :  Enter the any two value for addtion :  ");

	for(i=0;i<s;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&arr[i]);
			ans = ans  + arr[i];
	}
	printf("\n Array 1 :  value is here \n");

	for(i=0;i<s;i++)
	{
			printf("\n arr[%d] :  %d  \n",i,arr[i]);
	}
	
	printf("\n Array 2 :  value is here \n");

	for(i=0;i<s;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&brr[i]);
			ans = ans  + brr[i];
	}

	for(i=0;i<s;i++)
	{
			printf("\n brr[%d] :  %d  \n",i,brr[i]);
	}
	
	printf("\n summation of array is: \n");

	for(i=0;i<s;i++)
    {
			crr[i] = arr[i] + brr[i];
			printf("\n c[%d] : %d \n",i,crr[i]); 	
	}

 } 
 
 
 

