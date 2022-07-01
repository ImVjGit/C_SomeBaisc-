//3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number
#include<stdio.h>
void reverse(int);
void sumofdigit(int);
void both();
void main()
{
int a;
int num;
int r ;
int sum;
int nu ;
printf("choose any one\n 1 sum of digit \n 2 reverse the number \n 3 refresh \ntype
here: " );
scanf("%d",&a);
if(a==1){
printf("enter the number here:");
scanf("%d",&num);
sumofdigit(num);
}else{
if(a==2){
printf("Enetr the number is here : ");
scanf("%d",&nu);
reverse(nu);
}else{
if(a==3){
main();
}else{
printf("invalid input \n");
}
}
}
}
void sumofdigit(int num)
{
int sum;
int r ;
for(sum=0;r = num %10; num=num/10)
{
sum = sum + r;
}
printf("sum of digit is : %d \n", sum);
}
void reverse(int nu)
{ int re ;
int r ;
for(re=0;r=nu%10;nu = nu/10)
{
re = re *10 + r;
}
printf("the reverse value is : %d\n",re);
}