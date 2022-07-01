//2. Accept the element of array from user and sum all the element ?
#include <stdio.h>
 void add(int* ,int );
void main()
{
	int a[4];
	int ans;
	int i;
	int p;
	printf(":\n Enter the array size : \n");
	scanf("%d",&p);
	for(i=0;i<p;++i)
	{
		printf("\nEnter number %d :  " ,i);
		scanf("%d",&a[i]);
	
	}
	add(a,p);
 } 
 
 void add(int*a,int t )
 {	
  int ans;
 	int i;
  for(i=0;i<t;++i)
  {
  		ans = ans  + a[i];
 	
  }
 	printf("Addition is :  %d \n",ans );
 }
