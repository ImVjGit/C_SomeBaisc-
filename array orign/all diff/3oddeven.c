//3.Find all odd or even number from array?
#include <stdio.h>
void main()
{	int i;
	int a[5]={12,61,42,46,77};
	for(i=0;i<4;i++)
	{
 	 printf("Even numbers in the array are - ");
        for (i = 0; i < 5; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                printf("%d \t", a[i]);
            }
        }
 
        printf("\n Odd numbers in the array are -");
        for (i = 0; i <5; i++) 
        {
            if (a[i] % 2 != 0) 
            {
                printf("%d \t", a[i]);
            }
        }

	}
}

