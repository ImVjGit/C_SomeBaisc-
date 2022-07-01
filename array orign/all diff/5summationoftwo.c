//5 Create two arryas of integers. Add following Method 
// a. Accept the data for an array.
// b. Display data of the array.
// c. summation of two array. 
void main()
{
	int a[5];
	int b[5];
	int c[5];
	int ans;
	int i;
	printf("\n Array 1 :  Enter the any two value for addtion :  ");

	for(i=0;i<=4;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&a[i]);
			ans = ans  + a[i];
	}
	printf("\n Array 1 :  value is here \n");

	for(i=0;i<5;i++)
	{
			printf("\n a[%d] :  %d  \n",i,a[i]);
	}
	
	printf("\n Array 2 :  value is here \n");

	for(i=0;i<=4;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&b[i]);
			ans = ans  + b[i];
	}

	for(i=0;i<5;i++)
	{
			printf("\n b[%d] :  %d  \n",i,b[i]);
	}
	
	printf("\n summation of array is: \n");

	for(i=0;i<5;i++)
    {
			c[i] = a[i] + b[i];
			printf("\n c[%d] : %d \n",i,c[i]); 	
	}	
	

 } 
