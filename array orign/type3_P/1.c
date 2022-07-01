//1. Finding F from C (temp).
#include<stdio.h>
void findingf(float*);
void main()
{
float c[1],f;
printf("\t\tEnter the Celsius: ");
scanf("%f",&c[0]);
findingf(&c[0]);
}
void findingf(float* c )
{
float f ;
f = (*c*9)/5+32;
printf("\t\tTemperature in Fahrenheit is : %f\n",f);
}
