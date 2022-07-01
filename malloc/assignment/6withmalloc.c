// 6. Write program to create an array of integers and perform following operations on that array like finding 
//the sum,average,maximum and minimum number in that array.accept the number of the array from user.
//(dynamic with function type4)
#include <stdio.h>
#include <stdlib.h>
int*  add(int* ,int );
int* max(int*,int);
int* min(int*,int);
int* avg(int*, int);

void main ()
{

	int i;
	int m;
	int ans;
	int* a;
				
					int n;
	printf("\t Menu is \n 1  Sum    \n 2  Max and  min     \n 3  avg    \n ");
	scanf("%d",&m);
	
	
	if(m==1){
					
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
	else
	{
	 if(m==2){
	 		
			int s,i;
				int* mm;
				int p;
	 			int c;
	 			mm = (int*)malloc(s*sizeof(int));
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

				
	}else
		{
		if(m==3){
						int* arr;
						
						 int i, n;
						 int avv;
						 
						 printf("how many number u will enter : ");
						 scanf("%d", &n);
						 
					arr =(int*)malloc(n*sizeof(int));
						
						 for(i=0; i<n; i++)
						 {
						 	 printf("\nEnter %d numbers:  ",i);
						  scanf("%d",&arr[i]);
						 }
						 
						avv = avg(arr,n);
						printf("Average is : %d ",avv);

 
			
		}else{
			printf("\n invalid option ");
		}
	 	
	 }
	 
 }	
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





int* avg(int* arr, int n)
{
	 
						int sum=0, avg;
						 int i;
						 for(i=0; i< n; i++)
						 {
						  sum = sum + arr[i];
						 }
						 
				
						 avg = sum/n;
						 
					return avg;
						 //printf("Sum is %d\n", sum);
						 //printf("Average is %d", avg);
}

