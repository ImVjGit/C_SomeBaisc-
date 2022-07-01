//1. Find maximum and minimum element of array? 
#include<stdio.h>
void main()
{
	int  a[5]={100,12,556,43,489};
int* b;
	b = (int*)malloc(5*sizeof(int)); 
	if(a[0]>a[1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4] )
	{
		printf ("max nunber is %d \n", a[0]);
	}else
	{
		if(a[1]>a[2] && a[1] > a[3] && a[1] > a[4] )
		{
				printf ("max nunber is %d \n", a[1]);
		}else{
				if(a[2] > a[3] && a[2] > a[4] ){
					printf ("max nunber is %d \n", a[2]);
					
				}else{
					if( a[3] > a[4] ){
						printf ("max nunber is %d \n", a[3]);
					}
					else{
						printf ("max nunber is %d \n", a[4]);
					}
				}
			
		}
		
		
	}
		if(a[0]<a[1] && a[0] < a[2] && a[0] < a[3] && a[0] < a[4] )
	{
		printf ("mini nunber is %d \n", a[0]);
	}else
	{
		if(a[1]<a[2] && a[1] < a[3] && a[1] < a[4] )
		{
				printf ("mini nunber is %d \n", a[1]);
		}else{
				if(a[2] < a[3] && a[2] < a[4] ){
					printf ("mini nunber is %d \n", a[2]);
					
				}else{
					if( a[3] < a[4] ){
						printf ("mini nunber is %d \n", a[3]);
					}
					else{
						printf ("mini nunber is %d \n", a[4]);
					}
				}
			
		}
		
		
	}
	
	
}
