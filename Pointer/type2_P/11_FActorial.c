//11 find out the Factorial of any number 
#include<stdio.h> 
int Factorial(); 
void main() {  
  int a ;   
  a = Factorial();
  printf("%d\n",a);
  }
int Factorial() 
{    
int num;   
 int f;   
 int i=1;   
 printf("\nEnter the number : ");    
 scanf("%d",&num);    
 for(f=1;i<=num;i++)  
 {    
 f = f*i; 
 }    
 printf("Factorial is : ");    
 return f; 
 } 