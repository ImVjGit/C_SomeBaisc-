#include<stdio.h>
#include<string.h>
char stcpy(char*);
void main ()
{
	char arr[10];
	char p[10];
	p[10] = stcpy(arr);
	printf("%c",p);
}

char stcpy (char* brr)
{
	int i;
	char cc[20]={"hello"};
	while(cc[i]!='\0')
	{	i++;
		cc[i]=brr[i];
	
	}

	printf("%c",brr);

printf("%c",cc);	
}
