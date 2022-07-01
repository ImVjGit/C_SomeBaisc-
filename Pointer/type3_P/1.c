//1. Finding F from C (temp).
#include<stdio.h>
void findingf(float*);
void main()
{
float c,f;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c);
findingf(&c);
}
void findingf(float* c )
{
float f ;
f = (*c*9)/5+32;
printf("\t\tTemperature in Fahrenheit is : %f\n",f);
}
