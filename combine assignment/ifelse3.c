//3) Accept no. from user and check if it is 2 digit no and if it is 2 digit no then is it a prime no or not?
#include<stdio.h>
void main()
{
    int num1 ;
    printf("\nEnter the  number :  ");
    scanf("%d",&num1);
    if(num1<=99)
    {
        printf("\n its two digit number ");
                     int j=2;
					int flag = 1 ;
			          while (j < num1) {
			           if (num1 % j == 0) {
			               flag = 0;
			               break;
			           }
			           j++;
			       }
			       if (flag == 1) {
			           printf("\n its Prime number  :  %d \n", num1);
			       }else {
			       	printf("\n Non-prime :  %d \n",num1);
				   }
   }else{
       printf("\n its not two digit number ");
    }
    
}