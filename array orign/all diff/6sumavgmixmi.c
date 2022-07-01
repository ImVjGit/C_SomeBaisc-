// 6. Write program to create an array of integers and perform following operations on that array like finding 
//the sum,average,maximum and minimum number in that array.accept the number of the array from user.
#include <stdio.h>
void main ()
{
	int in[5];
	int i;
	int a[1];
	int m;
	int ans;
	printf("\t Menu is \n 1  Sum   \n 2 Max and min \n 3  avg  \n ");
	scanf("%d",&m);
	
	
	if(m==1){
		printf("\n Addtition program start :\n ");
			printf(":\n Enter the any two value for addtion : \n");
				for(i=0;i<=1;i++)
				{
					printf("\nEnter number :  ");
					scanf("%d",&a[i]);
					ans = ans  + a[i];
				}
				printf("Addition is :  %d \n",ans );
	}  
	else
	{
	 if(m==2){
	 			int s;
	 			int mm[20];
	 			int max=0;
	 			printf("how many number you enter :   ");
	 			scanf("%d",&s);
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
				
	}else
		{
		if(m== 3){
	int a[5], sum=0, avg;
						 int i, n;
						 
						 printf("how many number u will enter : ");
						 scanf("%d", &n);
						 
					
						 printf("Enter numbers:\n");
						 for(i=0; i< n; i++)
						 {
						  scanf("%d", &a[i]);
						 }
						 
						 
						 for(i=0; i< n; i++)
						 {
						  sum = sum + a[i];
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
