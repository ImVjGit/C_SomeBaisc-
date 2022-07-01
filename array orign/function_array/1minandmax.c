//1. Find maximum and minimum element of array? 
#include<stdio.h>
void MIN (int *,int);
void Max(int*,int);
void main()
{
				int s,i;
	 			int mm[20];
	 			int c;
	 			printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 			
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&mm[i]);
				}
				printf("\n what u want to choose:  \n1 Max     \n2  Min \n type here :    ");
				scanf("%d",&c);
				
				if(c == 1)
				{
				MAX(mm,s);	
				}else{
				MIN(mm,s);	
				}
				
}

void MAX (int* mm,int s)
{
	int i;
	
	int max=0 ;
					for(i=0;i<s;i++)
				{
					if(mm[i]>max)
					{
						max=mm[i];
					}
				}
				printf("max number is : %d \n",max);
}

void MIN (int* mm , int s)
{
	int i;
	int min;
					for(i=0;i<s;i++)
				{
					if(mm[i]<min)
					{
						min=mm[i];
					}
				}
				printf("minimum number is : %d \n",min);
}

