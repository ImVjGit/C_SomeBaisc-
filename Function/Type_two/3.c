//3 Accept a 3 digit number from user and find the sum of the digits and also reverse the
number
#include<stdio.h>
int reverse();
int sumofdigit();
int input();
void main()
{
int a = input();
printf("%d\n",a);
}
int input()
{
int a;
printf("choose any one\n 1 sum of digit \n 2 reverse the number \n type here: " );
scanf("%d",&a);
if(a==1){
sumofdigit();
}else{
reverse();
}
}
int sumofdigit()
{
int num;
int r ;
int sum;
printf("enter the number here:");
scanf("%d",&num);
for(sum=0;r = num %10; num=num/10)
{
sum = sum + r;
}
printf("Sum of digit is :");
return sum;
}
int reverse()
{ int re ;
int num ;
int r ;
printf("Enter the number is here : ");
scanf("%d",&num);
for(re=0;r=num%10;num = num/10)
{
re = re *10 + r;
}
printf("reverse number is : ");
return re ;
}