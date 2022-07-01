//4. Check if the given number is even or odd.
#include<stdio.h>
int evenodd(int);
void main()
{
int num ;
int x;
printf("enter the number here : ");
scanf("%d",&num);
x = evenodd(num);
printf("%d\n",x);
} int evenodd(int num)
{
if(num%2==0){
printf("its even number : ");
return num;
}
else{
printf("its odd number ");
return num;
}
}