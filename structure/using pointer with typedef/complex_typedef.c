#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct complex 
{
    int real ;
    int imaginary ;
}complex;

void storevalue(complex *);
void printfvalue(complex *);

void main()
{
    complex c1;
    storevalue(&c1);
    printfvalue(&c1);
}

void storevalue(complex *ptr)
{
printf("enter the real number : ");
scanf("%d",&ptr->real);
printf("enter the imaginary  number : ");
scanf("%d",&ptr->imaginary );
}

void printfvalue(complex *ptr)
{
printf("\naddition of both number is : %d + %d i ",ptr->real,ptr->imaginary);
}