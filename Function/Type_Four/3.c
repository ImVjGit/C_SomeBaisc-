//3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number
#include<stdio.h>
int reverse(int);
int sumofdigit(int);
int both(int);
void main()
{
int a;
int num;
int r ;
int sum;
int nu ;
int sa;
int ra;
int ba;
printf("Choose any one\n 1 Sum of digit \n 2 Reverse the number \n 3 Both \
ntype here: " );
scanf("%d",&a);
if(a==1){
printf("you choose Reverse the number\n");
printf("enter the number here:");
scanf("%d",&num);
sa =sumofdigit(num);
printf("%d\n ",sa);
}else{
if(a==2){
printf("you choose Reverse the number\n");
printf("Enetr the number is here : ");
scanf("%d",&nu);
ra = reverse(nu);
printf("%d\n ",ra);
}else{
if(a==3){
printf("you choose Both the number\n");
printf("Enetr the number is here : ");
scanf("%d",&num);
ba = both(num);
printf("%d\n",ba);
}else{
printf("invalid input \n");
}
}
}
} int sumofdigit(int num)
{
int r ;
int sum;
for(sum=0;r = num %10; num=num/10)
{
sum = sum + r;
}
printf("sum of digit is : ");
return sum;
}
int reverse(int nu)
{ int re ;
int r ;
for(re=0;r=nu%10;nu = nu/10)
{
re = re *10 + r;
}
printf("the reverse value is : ");
return re;
}
int both(int num)
{ int sum;
int r;
int reverse=0;
int rem;
for(sum = 0;r = num%10 ; num = num/10)
{s
um = sum + r ;
reverse = reverse * 10 + r;
}
printf("sum of digit is : %d \n",sum);
printf("reverse the number : ");
return reverse;
printf("\n");
}