#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct sales_manager
{
    int id ;
    char name[15];
    int sale;
    int intensvie;
    int target;
}sales_manager;

void storedata(sales_manager*);
void printdata(sales_manager*);

void main()
{
    sales_manager s1;
    storedata(&s1);
    printdata(&s1);
}

void storedata(sales_manager* ptr)
{
printf("\nid is : ");
scanf("%d",&ptr->id);
printf("\nname is : ");
scanf("%s",ptr->name);
printf("\nsales is : ");
scanf("%d",&ptr->sale);
printf("\nintensive is : ");
scanf("%d",&ptr->intensvie);
printf("\ntarget is : ");
scanf("%d",&ptr->target);
}
void printdata(sales_manager* ptr)
{
printf("\nid is : %d",ptr->id);
printf("\nname  is : %s ",ptr->name);
printf("\nsales is : %d",ptr->sale);
printf("\nintensive is : %d Percentage ",ptr->intensvie);
printf("\ntarget is : %d",ptr->target);
}