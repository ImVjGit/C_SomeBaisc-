//2 create a structure book with data members as bname,id,author,price,
 // accept the values of all these member from user and display them.
 
#include<stdio.h>
#include<string.h>

struct book
{
char bname[20];
int id;
char author[20];
int price;
}; 

struct book billfun(struct book* ,int);
void main()
{
    struct book b[5];
      billfun(b,5);    
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n Book Number : %d",i);
        printf("\nbook name is : %s ",b[i].bname);
        printf("\nbook id is : %d ",b[i].id);
        printf("\nbook author is : %s ",b[i].author);
        printf("\nbook price is : %d ",b[i].price);
        printf("\n");
    }
}

struct book billfun(struct book* b,int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("enter book name : ");
        scanf("%s",b[i].bname);
        printf("book id is :  ");
        scanf("%d",&b[i].id);
        printf("book author is :  ");
        scanf("%s",b[i].author);
        printf("book price is : ");
        scanf("%d",&b[i].price);
        printf("\n\n");
    }
}
