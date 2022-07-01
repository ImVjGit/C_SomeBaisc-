//2) Accept a no from user, when user enters that in many no. sum all 
//the no and display result in string format?
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char *firstno[]={"zero","ten","eleven","twelve","thirteen", "fourteen","fifteen","sixteen","seventeen", "eighteen","nineteen"};
   char *secondno[]={"twenty","thirty","forty","fifty","sixty", "seventy","eighty","ninty"};
   char *thirdno[]={"one","two","three","four","five","six","seven","eight","nine"};
  	int i ;
  	int* a;
	  int num ; 
	  int sum = 0;
	  int no;
    printf("Enter a array size is : \n");
    scanf("%d",&num);
   a = (int*)malloc(num*sizeof(int));
    
    for(i=0;i<num;i++)
    {
    	printf("enter the number %d : ",i);
    	scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		sum = sum + a[i];
		
	}
	no = sum  ;
	  printf("sum is : %d",no);
	printf("\n");
if(no<0 || no>99)
{
printf("\nenter number is not a two digit number\n");
}else 
	{ 
	 if(no==0)
		{
			printf("\nthe enter no is:%s\n",firstno[no]);
		}else
			{
			  if(no>=10 && no<=19)
				{
				printf("the enter no is:%s\n",firstno[no-10+1]);				
				}else{
					if(no>=20 && no<=90)
						{
							if(no%10 == 0)
								{
								printf("the enter no is:%s\n",secondno[no/10 - 2]);
								}
								  else{
      printf("the enter no is:%s %s\n",secondno[no/10-2],thirdno[no%10-1]);
}
						
						}
					
					}	

			
		}

}
 




}
