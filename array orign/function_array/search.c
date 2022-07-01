//searching number 
#include<stdio.h>
void main()
{
	int a[5]= {10,12,45,75,43};
	int num;	 
	int i ;
	
		 pritnf("\nEnter the number u want to search:  ");
		 scanf("%d",&num);
		 for(i=0;i<num;i++)
		 {
		 	if(a[i]==num)
			 {
			 	printf("\nNumber found : %d  ",a[i]);	
			 }	
		 } 
}
