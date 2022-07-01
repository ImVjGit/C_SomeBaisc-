//4 Check if the given number is even or odd.
#include<stdio.h>
void evenodd();
void main()
{
 evenodd();
}
void evenodd()
{
 int num ;
 printf("enter the number here : ");
 scanf("%d",&num);
 if(num%2==0){
 printf("its even number : %d\n",num);
 }
 else{
 printf("its odd number : %d\n",num);
 }
}