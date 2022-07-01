#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct time
{
    int hr;
    int min;
    int seconds;
}time;

void storetime(time*);
void printtime(time*);

void  main()
{
    struct  time t1;
    storetime(&t1);
    printtime(&t1);
    
}
void storetime(time* ptr)
{
printf("\n enter the hr :  ");
scanf("%d",&ptr->hr);
printf("\n enter the min :  ");
scanf("%d",&ptr->min);
printf("\n enter the seconds :  ");
scanf("%d",&ptr->seconds);
}

void printtime(time* ptr)
{
    printf("\n the hr :  %d ",ptr->hr);
    printf("\n the min :  %d",ptr->min);
    printf("\n the seconds :  %d",ptr->seconds);
}