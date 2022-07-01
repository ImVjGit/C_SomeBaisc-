//2. Accept the element of array from user and sum all the element ?(dynamic array only main)
#include <stdio.h>
void main()
{
	int* a;
	int ans;
	int i;
	int n;
	printf("enter the array size : ");
	scanf("%d",&n);
	a =(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;++i)
	{
		printf("\nEnter number a[%d] :  " ,i);
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;++i)
  {
  		ans = ans  + a[i];
 	
  }

   printf("\n All value in array addition is : %d ",ans);
 } 
 
 
