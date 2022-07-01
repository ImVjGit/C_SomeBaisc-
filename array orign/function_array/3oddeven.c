//3.Find all odd or even number from array?
#include <stdio.h>
void evenodd(int*,int);
void main()
{	int i;
	int arr[10];
	int s;
	printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 			
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&arr[i]);
				}
	
	oddeven(arr,s);
}

void oddeven(int* arr,int t)
{
	int i;
	
	
		for(i=0;i<t;i++)
	{
 	 printf("\nEven numbers in the array are :     ");
        for (i = 0; i < t; i++) 
        {
            if (arr[i] % 2 == 0) 
            {
                printf("%d \t", arr[i]);
            }
        }
 
        printf("\n Odd numbers in the array are :     ");
        for (i = 0; i <t; i++) 
        {
            if (arr[i] % 2 != 0) 
            {
                printf("%d \t", arr[i]);
            }
        }

	}
}

