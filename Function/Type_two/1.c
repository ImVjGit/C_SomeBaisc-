//1 Finding F from C (temp).
#include<stdio.h>
float findingf();
void main()
{
float x ;
x = findingf();
printf("\t\tTemperature in Fahrenheit is : %f\n",x);
}
float findingf()
{
float c,f;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c);
f = ((c*9)/5)+32;
return f;
}