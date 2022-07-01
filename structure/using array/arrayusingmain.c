
#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
};

void main()
{
    struct student arr[3];
    int i ;
    for(i=0;i<3;i++)
    {
        printf("enter the roll no : ");
        scanf("%d",&arr[i].roll);
        printf("enter the name : ");
        scanf("%s",&arr[i].name);
    }

    for(i=0;i<3;i++)
    {
        printf("\n roll number is :  %d",arr[i].roll);
        printf("\n name  is :  %s",arr[i].name);
    }

}