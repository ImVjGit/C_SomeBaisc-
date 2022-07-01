//2. Accept the element of array from user and sum all the element ?(dynamic array with function type4)
#include <stdio.h>
int*  add(int* ,int );
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
	
ans = add(a,n);
 printf("\n All value in array addition is : %d ",ans);
 } 
 
 int* add(int* a,int t )
 {	
  int ans;
 	int i;
  for(i=0;i<t;++i)
  {
  		ans = ans  + a[i];
 	
  }
 	//printf("Addition is :  %d \n",ans );
	return ans;
 }
