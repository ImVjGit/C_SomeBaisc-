//2. Accept the element of array from user and sum all the element ?
#include <stdio.h>
void main()
{
	int a[4];
	int ans;
	int i;
	printf(":\n Enter the any two value for addtion : \n");
	for(i=0;i<=4;i++)
	{
		printf("\nEnter number :  ");
		scanf("%d",&a[i]);
		ans = ans  + a[i];
	}
	printf("Addition is :  %d \n",ans );
 } 
