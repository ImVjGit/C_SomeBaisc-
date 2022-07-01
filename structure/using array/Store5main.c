//Store 5 student data in array &ask  user which roll number you want and if find then display the name on screen?

#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
};

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

    

printf("\n enter the roll number if u want  name :  ");
scanf("%d",&num);
for(i=0;i<5;i++)
{
    if(arr[i].roll==num)
    {   printf("\nroll number found");
        printf("\nroll no is %d name is %s ",num,arr[i].name);
    }
}


}