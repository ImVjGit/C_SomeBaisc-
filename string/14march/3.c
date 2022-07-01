#include<stdio.h>
#include<string.h>
char* mycpy(char*,char*);
void main()
{
	char arr[5]="abc";
	char brr[5];

printf("vlaue is :  %s",mycpy(brr,arr));	
}

char* mycpy(char* arr,char* brr)
{
	int i=0;
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	return brr;
}
