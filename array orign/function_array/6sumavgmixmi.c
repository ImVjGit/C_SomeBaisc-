// 6. Write program to create an array of integers and perform following operations on that array like finding 
//the sum,average,maximum and minimum number in that array.accept the number of the array from user.
#include <stdio.h>
void add(int*,int);
void MIN (int *,int);
void Max(int*,int);
void avg(int*, int);

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
		printf("\n Addtition program start :\n ");
			printf(":\n Enter the any two value for addtion : \n");
				for(i=0;i<=1;i++)
				{
					printf("\nEnter number :  ");
					scanf("%d",&a[i]);
				}
			add(a,1);
	}  
	else
	{
	 if(m==2){
	 		
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
				
	}else
		{
		if(m==3){
						int arr[5];
						
						 int i, n;
						 
						 printf("how many number u will enter : ");
						 scanf("%d", &n);
						 
					
						
						 for(i=0; i< n; i++)
						 {
						 	 printf("\nEnter %d numbers:  ",i);
						  scanf("%d",&arr[i]);
						 }
						 
						avg(arr,n);
						

 
			
		}else{
			printf("\n invalid option ");
		}
	 	
	 }
	 
 }	
}









void add(int* a, int t )
{	int ans;
	int i;
		for(i=0;i<=t;i++)
		{
		ans = ans  + a[i];	
		}
			printf("Addition is :  %d \n",ans );
		
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




void avg(int* arr, int n)
{
	 
						int sum=0, avg;
						 int i;
						 for(i=0; i< n; i++)
						 {
						  sum = sum + arr[i];
						 }
						 
				
						 avg = sum/n;
						 
				
						 printf("Sum is %d\n", sum);
						 printf("Average is %d", avg);
}

