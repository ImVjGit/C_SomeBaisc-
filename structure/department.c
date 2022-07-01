#include<stdio.h>
#include<string.h>
struct department
{
    char name[10];
    int id;
    char location[15];
    int emp_count;
};

void main()
{
    struct department d1;
    struct department d2;
    struct department d3;

     //user enter
    printf("\n enter the name  : ");
    scanf("%s",&d1.name);
    printf("enter the id : ");
    scanf("%d",&d1.id);    
    printf("enter the location: ");
    scanf("%s",&d1.location);      
    printf("\nenter the emp_count :");   
    scanf("%d",&d1.emp_count);

    //name
    strcpy(d2.name,"ronika");
    strcpy(d3.name,"reshma");
    printf("\n 1 name  : %s",d1.name);
    printf("\n 2 name  : %s",d2.name);
    printf("\n 3 name  : %s",d3.name);

    //id
    d2.id=1;
    d3.id=2;
    printf("\n1 id  is : %d",d1.id);
    printf("\n2 id  is : %d",d2.id);
    printf("\n3 id  is : %d",d3.id);

    //location
    strcpy(d2.location,"pune");
    strcpy(d3.location,"mumbai");
    printf("\n 1 name  : %s",d1.location);
    printf("\n 2 name  : %s",d2.location);
    printf("\n 3 name  : %s",d3.location);

    //emp_count
    d2.emp_count=100;
    d3.emp_count=200;
    printf("\n1 emp_count  is : %d",d1.emp_count);
    printf("\n2 emp_count  is : %d",d2.emp_count);
    printf("\n3 emp_count  is : %d",d3.emp_count);
}