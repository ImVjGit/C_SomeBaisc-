//4 Check if the given number is even or odd.
#include<stdio.h>
int evenodd();
void main()
{
int x;
x = evenodd();
printf("%d",x);
} int evenodd()
{
int num ;
printf("enter the number here : ");
scanf("%d",&num);
if(num%2==0){
printf("its even number : %d\n",num);
return num;
}
else{
printf("its odd number : %d\n",num);
return num;
}
}