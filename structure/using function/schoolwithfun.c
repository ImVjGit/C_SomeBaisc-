#include<stdio.h>
#include<string.h>
struct school
{
    int intake;
   
};
struct school intake(struct school);
void main()
{
    struct school s1;
    s1 = intake(s1);
    printf("intake is %d",s1);
}

struct school intake(struct school s1)
{
     printf("Enter the intake of class :  ");
    scanf("%d",&s1.intake);
    return s1;
}