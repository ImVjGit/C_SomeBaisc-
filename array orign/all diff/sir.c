void main()
{
	int arr[5]= {10,20};
	int i=0;
	int * ptr ;
	ptr = &arr[0];
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\t%d", *ptr+i );
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",*(ptr+i));
		
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",ptr[i]);
	}
}
