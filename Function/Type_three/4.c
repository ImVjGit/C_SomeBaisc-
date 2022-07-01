//4. Check if the given number is even or odd.
#include<stdio.h>
void evenodd(int);
void main()
{
int num;
printf("enter the number here : ");
scanf("%d",&num);
evenodd(num);
}
void evenodd(int num)
{
if(num%2==0){
printf("its even number : %d",num);
}
else{
printf("its odd number : %d", num);