//3.Accept a sentence from user and count total no. of words and also total no. of letters in that words?


#include<stdio.h>
#include<string.h>

int main()
{
  	char str[100];
  	int i, totalwords ,tl;
  	totalwords = 1;
  	tl = 1 ;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String = %d ",totalwords);
	
	for(i = 0; str[i] != '\0'; i++)
		{
			if(str[i] != '\0')
			{
				tl++;	
			} 
		
		}	
			tl--;
	printf("\n The Total Number of letter  in this String  = %d ",tl);
}
