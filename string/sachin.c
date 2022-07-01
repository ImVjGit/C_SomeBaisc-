#include<stdio.h>
int mylen(char* );
void main()
{
	char arr[15]={"vijay"};
	int l ;
	l = mylen(arr);
	printf("lnth is : %d ",l);
}

int mylen(char* arr)
{
	int i ;
	while(arr[i]!='\0')
	{
		i++;
	}
	return i;
}
