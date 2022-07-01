//1. Finding F from C (temp).
#include<stdio.h>
float findingf(float);
void main()
{
float c;
int a;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c);
findingf(c);
printf("\t\tTemperature in Fahrenheit is : %f\n",c);
}
float findingf(float c )
{ int f;
f = ((c*9)/5)+32;
return f;
}