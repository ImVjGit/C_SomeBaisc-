// using type 3 function Prime Number 
#include<stdio.h>
void prime(int*);
void main()
{
	int num;
	
	printf("\n Enter the number : " );
	scanf("%d",&num);
	prime(&num);
	
}

void prime(int* num )
{
	int i ;
	int c = 0;

	for (i = 1; i <= *num; i++) {
      if (*num % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("Its is a Prime number and value is : %d ", *num );
  }
  else {
  printf("Its is not a Prime number and value is : %d", *num);
  }
     
}
	
	

