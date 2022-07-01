//1. Find maximum and minimum element of array? (with dynamic in main)
#include<stdio.h>
#include<stdlib.h>
void main()
{
				int s,i;
				int mm[20];
				int* b;
					int min =mm[0] ;
	 			int max=mm[0] ;
				 printf("how many array u want  :   ");
	 			scanf("%d",&s);
	 		
				b = (int*)malloc(s*sizeof(int)); 
	 			
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&mm[i]);
				}
				
				
					for(i=0;i<s;i++)
				{
					if(mm[i]>max)
					{
						max=mm[i];
					}
				}
		printf("max number is : %d \n",max);
		
	     
				for(i=0;i<s;i++)
				{
					if(mm[i]<min)
					{
						min=mm[i];
					}
					
				}
				printf("minimum number is : %d \n",min);
		
	



}

