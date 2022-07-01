#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    int roll;
    char name[20];
}student;
void studentvalue(student*);
void studentprint(student*);
void main()
{
    student s1;
    studentvalue(&s1);
    studentprint(&s1);
}


void studentvalue(student* ptr)
{
    printf("\n enter roll number is : ");
    scanf("%d",&ptr->roll);    
    printf("\n enter name is : ");
    scanf("%s",ptr->name);
}

void studentprint(student* ptr)
{
printf("\n name is %s ",ptr->name);
printf("\n roll number is %d",ptr->roll);
}
