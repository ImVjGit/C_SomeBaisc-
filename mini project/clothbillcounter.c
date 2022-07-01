#include<stdio.h>
#include<string.h>

typedef struct bill
{
char name[20];
int billnumber;
char Item[20];
int Amount;

}bill; 

void getinfo(bill*);
void print(bill*);
void main()
{
    bill b1;

    getinfo(&b1);
    print(&b1);

}

void getinfo(bill* b1)
{
    printf("enter  customer name : ");
    scanf("%s",b1->name);
    printf("Enter bill number : ");
    scanf("%d",&b1->billnumber);
    printf("Enter the Item Name :");
    scanf("%s",&b1->Item);
    printf("Enter the Amount : ");
    scanf("%d",&b1->Amount);
}

void print(bill* b1)
{
    printf("\n*****************************************************");
    printf("                    Dress Shop                          ");
    printf("\n*****************************************************");
    printf("\n Customer name :%s ",b1->name);
    printf("\n Bill Number : %d",b1->billnumber);   
    printf("\n Item name : %s",b1->Item);
    printf("\n Amount name : %d /-",b1->Amount);
    printf("\n*****************************************************");
    printf("                    Customer copy                       ");
    printf("\n*****************************************************");
}

