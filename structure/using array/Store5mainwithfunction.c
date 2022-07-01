#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
};

struct student findnumber(struct studnet* ,int);
void main()
{
    struct student arr[5];
    int i ;
    int num;
        
    for(i=0;i<5;i++)
    {
        printf("enter the roll no for arr[%d]: ",i);
        scanf("%d",&arr[i].roll);
        printf("enter the name : ");
        scanf("%s",&arr[i].name);
    }
    for(i=0;i<5;i++)
    {
        printf("\n roll number is :  %d",arr[i].roll);
        printf("\n name  is :  %s",arr[i].name);
    }
findnumber(arr,5);
 for(i=0;i<5;i++)
    {
        printf("\n roll number is :  %d",arr[i].roll);
        printf("\n name  is :  %s",arr[i].name);
    }
    for(i=0;i<5;i++)
{
    if(arr[i].roll==num)
    {   printf("\nroll number found");
        printf("\nroll no is %d name is %s ",num,arr[i].name);
    }
}
}



struct student findnumber(struct studnet* ptr,int t)
{
    int num;
    printf("\n enter the roll number if u want  name :  ");
scanf("%d",&num);

}