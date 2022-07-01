//5 Create two arryas of integers. Add following Method 
// a. Accept the data for an array.
// b. Display data of the array.
// c. summation of two array. 
void sumation(int* , int* , int* ,int,int,int);

void main()
{
	int arr[5];
	int brr[5];
	int crr[5];
	int ans;
	int i;
	printf("\n Array 1 :  Enter the any two value for addtion :  ");

	for(i=0;i<=4;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&arr[i]);
			ans = ans  + arr[i];
	}
	printf("\n Array 1 :  value is here \n");

	for(i=0;i<5;i++)
	{
			printf("\n arr[%d] :  %d  \n",i,arr[i]);
	}
	
	printf("\n Array 2 :  value is here \n");

	for(i=0;i<=4;i++)
	{
			printf("\nEnter %d number   :  ",i);
			scanf("%d",&brr[i]);
			ans = ans  + brr[i];
	}

	for(i=0;i<5;i++)
	{
			printf("\n brr[%d] :  %d  \n",i,brr[i]);
	}
	
	sumation(arr,brr,crr,5,5,5)	;

 } 
 
 
 
 
 void sumation(int* arr, int* brr, int* crr ,int t , int x ,int y)
 {
 	int i;
 	
 	printf("\n summation of array is: \n");

	for(i=0;i<t;i++)
    {
			crr[i] = arr[i] + brr[i];
			printf("\n c[%d] : %d \n",i,crr[i]); 	
	}
 }
