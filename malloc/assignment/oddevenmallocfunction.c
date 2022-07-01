//3.Find all odd or even number from array? (dynamic type3 function )
#include <stdio.h>
#include<stdlib.h>
void* oddeven(int*,int);
void main()
{	int i;
	int* arr;
	int a;
	int s;
	printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 		arr =(int*)malloc(s*sizeof(int));	
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&arr[i]);
				}
	
	a = oddeven(arr,s);

}

void* oddeven(int* arr,int t)
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

