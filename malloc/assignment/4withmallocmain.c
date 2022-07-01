// 4. Find all prime number in array (dynamic with main only )
#include <stdio.h>
#include<stdlib.h>
void main()
{
	int* arr;
	int i,s;
	printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 	arr = (int*)malloc(s*sizeof(int));		
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&arr[i]);
				}
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


