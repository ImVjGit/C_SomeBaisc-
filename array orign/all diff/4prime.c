// 4. Find all prime number in array 
#include <stdio.h>
void main()
{
	int a[10]={15,23,8,47,77,48,83,53,75,71};
	int i;

	
	for(i=0;i<10;i++)
	{
			     	int j=2;
					int flag = 1 ;
			          while (j < a[i]) {
			           if (a[i] % j == 0) {
			               flag = 0;
			               break;
			           }
			           j++;
			       }
			       if (flag == 1) {
			           printf("\tPrime number is :  %d \n", a[i]);
			       }else {
			       	printf("\tNon-prime is:  %d \n",a[i]);
				   }
			   }
	
			
}
