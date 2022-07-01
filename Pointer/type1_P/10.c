//10 Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.
#include<stdio.h>
void nonstud();
void stud();
void main()
{
 int price;
 int v;
 int final,total;
 printf( "you are studnet ( yes(1) or no(2) ):");
 scanf ("%d",&v);
 if(v == 1)
 stud();
 if(v == 2)
 nonstud();
}
 void stud()
 {
 int price;
 int final,total;
 printf ("you are student so u will get discount \n");
 printf("enter the price here :");
 scanf("%d",&price);
 if(price>500)
 {
 final = price * 0.2;
 total = price -final;
 printf (" 20 percent discount you get : %d\n",total);
 }else
 {
 final = price * 0.1;
 total = price -final;
 printf ("10 percent discount you get : %d \n",total);
 }
 }
 void nonstud()
 {
 int price;
 int final,total;
 printf ("you are non-student so u will get discount \n");
 printf("enter the price here :");
 scanf("%d",&price);
 if(price>600)
 {
 final = price * 0.15;
 total = price -final;
 printf("15 percent discount you get is : %d \n",total);
 }else
 {
 printf("Sorry u are not valid for discount : %d \n",price);
 }
 }
