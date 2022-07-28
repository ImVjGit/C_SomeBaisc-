//1 Finding F from C (temp).
#include<stdio.h>
void findingf();
void main()
{
 findingf();
}
void findingf() //
{
 int c,f;
 printf("\t\tEnter the Celsius: ");
 scanf("%d",&c);
 f = ((c*9)/5)+32;
 printf("\t\tTemperature in Fahrenheit is : %d\n",f);
}
