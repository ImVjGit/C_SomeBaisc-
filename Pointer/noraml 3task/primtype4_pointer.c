// using type 4 function Prime Number 
#include<stdio.h>
int prime(int *);
void main()
{
	int num;
	int ans ;
	printf("\n Enter the number : " );
	scanf("%d",&num);
	ans = prime(&num);
	printf(" and number is : %d  ",ans);
}

int prime(int* num )
{
	int i ;
	int c = 0;

	for (i = 1; i <= *num; i++) {
      if (*num % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("Its is a Prime number");
  }
  else {
  printf("Its is not a Prime number");
  }
  return *num;    
}
	
	

