//3Accept a 3 digit number from user and find the sum of the digits and also reverse the number
#include<stdio.h>
void reverse();
void sumofdigit();
void both();
void main()
{
 int a;
 printf("choose any one\n 1 sum of digit \n 2 reverse the number \n 3 both \ntype here:
" );
 scanf("%d",&a);
 if(a==1)
 sumofdigit();
 if(a==2)
 reverse();
 if(a==3){
 both();
 }
 else
 {
 printf("invalid input \n");
 }
}
 void sumofdigit()
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
 printf("sum of digit is : %d \n", sum);
 }
void reverse()
{
int re ;
int num ;
int r ;
printf("Enetr the number is here : ");
scanf("%d",&num);
 for(re=0;r=num%10;num = num/10)
 {
 re = re *10 + r;
 }
 printf("the reverse value is : %d\n",re);
}
void both()
{
int num;
int sum;
int r;
int reverse=0;
int rem;
printf("Enter the 3 digit number: ");
scanf("%d",&num);
for(sum = 0;r = num%10 ; num = num/10)
{
sum = sum + r ;
reverse = reverse * 10 + r;
}
printf("sum of digit is : %d ",sum);
printf("\n");
printf("\n reverse the number %d ",reverse);
printf("\n");
}
