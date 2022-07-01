#include<stdio.h>
#include<string.h>
void mycpy(char*,char*);
void main()
{
	char arr[5]="abc";
	char brr[5];
mycpy(brr,arr);
printf("%s",brr);	
}

void mycpy(char* arr,char* brr)
{
	int i=0;
	while(arr[i]!='\0')
	{
		brr[i]=arr[i];
		i++;
	}
	brr[i]='\0';
	printf("%s",arr);
}
