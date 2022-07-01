//3.Find all odd or even number from array?(dynamic main)
#include <stdio.h>
#include <stdlib.h>
void main()
{	int i;
	int* a;
	//int* b;
	int n;
	printf("enter the arry size : ");
	scanf("%d",&n);
		a = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Result is:  ");
	for(i=0;i<n;i++)
	{
 	 printf("\nEven numbers in the array are :  ");
        for (i = 0; i < n; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                printf("%d \t", a[i]);
            }
        }
 
        printf("\n Odd numbers in the array are : ");
        for (i = 0; i <n; i++) 
        {
            if (a[i] % 2 != 0) 
            {
                printf("%d \t", a[i]);
            }
        }

	}
}

