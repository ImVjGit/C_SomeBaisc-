//1. Find maximum and minimum element of array?( with dynamic and function type 4) 
#include<stdio.h>
#include<stdlib.h>
int* max(int*,int);
int* min(int*,int);
void main()
{
				int s,i;
				int mm[20];
				int* p;
	 			int c;
	 			p = (int*)malloc(s*sizeof(int));
	 			printf("how many number you enter :   ");
	 			scanf("%d",&s);
	 			
				 for(i=0;i<s;i++)
				{
					printf("\nEnter the %d) value :   ",i);
					scanf("%d",&mm[i]);
				}
				printf("\n what u want to choose:  \n1 Max     \n2 Min \n type here :    ");
				scanf("%d",&c);
				
				if(c == 1)
				{
				p = max(mm,s);	
				printf ("value is %d ",p);
				}
				else
				{
				if(c == 2)
					{
					p = min(mm,s);
						printf("value is %d", p);	
					} else
					 {
						printf("\n not valid ");
					}
					
				}
				
}

int* max(int* mm,int s)
{
	int i;
	int max=mm[0] ;
		for(i=0;i<s;i++)
				{
					if(mm[i]>max)
					{
						max=mm[i];
					}
				}
		//		printf("max number is : %d \n",max);
		return max;
}

int* min(int* pp , int t)
{
	int i;
	int min= pp[0];
					for(i=0;i<t;i++)
				{
					if(pp[i]<min)
					{
						min = pp[i];
					}
				}
			//	printf("minimum number is : %d \n",min);
		return min;
}
