#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct admin
{
    int id ;
    char name[15];
    int salary;
    int allownce;
}admin;
void storedata(admin*);
void printdata(admin*);

void main()
{
     admin a1;
    storedata(&a1);
    printdata(&a1);
}

void storedata(admin* ptr)
{
printf("\nid is : ");
scanf("%d",&ptr->id);
printf("\nname is : ");
scanf("%s",ptr->name);
printf("\nsalary is : ");
scanf("%d",&ptr->salary);
printf("\nallownce is : ");
scanf("%d",&ptr->allownce);
}

void printdata(admin*ptr)
{
printf("\nadmin id is : %d",ptr->id);
printf("\nadmin name  is : %s ",ptr->name);
printf("\nsalary is : %d",ptr->salary);
printf("\nallownce is : %d Percentage ",ptr->allownce);
}