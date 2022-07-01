// 6. Write program to create an array of integers and perform following operations on that array like finding 
//the sum,average,maximum and minimum number in that array.accept the number of the array from user.
//(dynamic with main)
#include <stdio.h>
#include <stdio.h>
void main ()
{
	int in[5];
	int i;
	int a[1];
	int m;
	int ans;
	printf("\t Menu is \n 1  Sum    \n 2  Max and  min     \n 3  avg    \n ");
	scanf("%d",&m);
	
	
	if(m==1){
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
					
					for(i=0;i<n;++i)
					  {
					  		ans = ans  + a[i];
					 	
					  }
					 	
					
									 printf("\n All value in array addition is : %d ",ans);

	}  
	else
	{
	 if(m==2){
	 		
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
				int max=mm[0] ;
					for(i=0;i<s;i++)
				{
					if(mm[i]>max)
					{
						max=mm[i];
					}
				}
			printf("max number is : %d \n",max);	
				
				}
				else
				{
				if(c == 2)
					{
				int min= mm[0];
					for(i=0;i<s;i++)
				{
					if(mm[i]<min)
					{
						min = mm[i];
					}
				}
				printf("minimum number is : %d \n",min);
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
						 	int sum=0, avg;
						 
						 printf("how many number u will enter : ");
						 scanf("%d", &n);
						 
					arr =(int*)malloc(n*sizeof(int));
						
						 for(i=0; i<n; i++)
						 {
						 	 printf("\nEnter %d numbers:  ",i);
						  scanf("%d",&arr[i]);
						 }
						 
						
						
						 for(i=0; i< n; i++)
						 {
						  sum = sum + arr[i];
						 }
						 
				
						 avg = sum/n;
						 
					
						 printf("Sum is %d\n", sum);
						 printf("Average is %d", avg);

 
			
		}else{
			printf("\n invalid option ");
		}
	 	
	 }
	 
 }	
}

