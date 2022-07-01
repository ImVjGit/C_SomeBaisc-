#include<stdio.h>
#include<string.h>

struct notepad
{
    char name[20];
    int size;
    int countline;      
};

void main()
{
    struct notepad n1;
    struct notepad n2;
    struct notepad n3;

//user enter value 
printf("\nenter the name ");
scanf("%s",&n1.name);
printf("\nenter the size : ");
scanf("%d",&n1.size);
printf("\nenter the count of line : ");
scanf("%d",&n1.countline);

//name
strcpy(n2.name,"tonika");
strcpy(n3.name,"onila");
printf("\n name is %s  ",n1.name);
printf("\n name is %s  ",n2.name);
printf("\n name is %s  ",n3.name);

//size
n2.size=42;
n3.size=89;
printf("\n size is : %d",n1.size);
printf("\n size is : %d",n2.size);
printf("\n size is : %d",n3.size);

//countline
n2.countline=180;
n3.countline=200;
printf("\n countline is :%d ",n1.countline);
printf("\n countline is : %d",n2.countline);
printf("\n countline is : %d",n3.countline);
}

