#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct employee
{
    int id ;
    char name[20];
    int salary;
}employee;

void storevalue(employee*);
void print(employee*);

void main()
{
    employee e1;
    storevalue(&e1);
    print(&e1);
}

void storevalue(employee* ptr)
{
    printf("\nenter the employee id :  ");
    scanf("%d",&ptr->id);
    printf("Enter the employee name :  ");
    scanf("%s",ptr->name);
    printf("\nenter the employee salary :  ");
    scanf("%d",&ptr->salary);
}

void print(employee* ptr)
{
    printf("\n employee id :  %d ",ptr->id);
    printf("\n employee name : %s ",ptr->name);
    printf("\nemployee salary : %d ",ptr->salary);
}