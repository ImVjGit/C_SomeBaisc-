#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct date
{
    int day;
    int month;
    int year;
}date;

void storedate(date*);
void printdate(date*);

void  main()
{
    date d1;
    storedate(&d1);
    printdate(&d1);
    
}

void storedate(date* ptr)
{
printf("\n enter the day :  ");
scanf("%d",&ptr->day);
printf("\n enter the month :  ");
scanf("%d",&ptr->month);
printf("\n enter the year :  ");
scanf("%d",&ptr->year);
}

void printdate(date* ptr)
{
    printf("\n the day :  %d ",ptr->day);
    printf("\n the month :  %d",ptr->month);
    printf("\n the year :  %d",ptr->year);
}