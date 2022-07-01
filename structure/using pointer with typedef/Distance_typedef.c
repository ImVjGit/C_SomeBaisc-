#include<stdio.h>
#include<string.h>

typedef struct distance
{
    int feet;
    int inches;
}distance;

void storevalue(distance*);
void printvalue(distance*);

void main()
{
    distance d1;
    storevalue(&d1);
    printvalue(&d1);
}

void storevalue(distance* ptr)
{
printf("enter the feet :");
scanf("%d",&ptr->feet);
printf("enter the inches: ");
scanf("%d",&ptr->inches);
}

void printvalue(distance* ptr)
{
printf(" \nfeet  is : %d ",ptr->feet);
printf(" \ninches is  :%d ",ptr->inches);
}