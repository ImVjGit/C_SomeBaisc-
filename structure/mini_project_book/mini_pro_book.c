//this project have Simple Function 

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
struct book findbyid(struct book*, int);
struct book fbyauthor(struct book*,int);
struct book findbybookname(struct book*,int);

void main()
{
    struct book b[5];
  
      billfun(b,5);    
    int i;
    int o;
    for(i=0;i<5;i++)
    {
        printf("\n Book Number : %d",i);
        printf("\nbook name is : %s ",b[i].bname);
        printf("\nbook id is : %d ",b[i].id);
        printf("\nbook author is : %s ",b[i].author);
        printf("\nbook price is : %d ",b[i].price);
        printf("\n");
    }

printf("\nChoose seraching options: \n 1 id  \n 2 author \n 3 book name  \n choose any one : ");
scanf("%d",&o);
if(o==1)
{
    findbyid(b,5);
}else
{
    if(o==2)
        {
            fbyauthor(b,5);
        }else
        {
            if (o==3)
            {
                   findbybookname(b,5);
            }
            
        }
}

}

struct book billfun(struct book* b,int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("enter book name : ");
        scanf("%s",&b[i].bname);
        printf("book id is :  ");
        scanf("%d",&b[i].id);
        printf("book author is :  ");
        scanf("%s",b[i].author);
        printf("book price is : ");
        scanf("%d",&b[i].price);
        printf("\n\n");
    }
}

struct book findbyid(struct book* b, int t )
{   
    int i;
    int num;
    printf("\nenter the id here :   ");
    scanf("%d",&num);
     for(i=0;i<t;i++)
     {
    if(num==b[i].id)
    {
       printf("\n Book Number : %d",i);
        printf("\nbook name is : %s ",b[i].bname);
        printf("\nbook id is : %d ",b[i].id);
        printf("\nbook author is : %s ",b[i].author);
        printf("\nbook price is : %d ",b[i].price);
        printf("\n");
    }
 }
}

struct book fbyauthor(struct book* b,int t)
{
    int ans;
    int i;
    char fa[20];
    printf("\nenter the author name  here :   ");
    scanf("%s",fa);
     for(i=0;i<t;i++)
  {   
    if(strcmp(fa,b[i].author)==0)
    {
      // printf("\n Book Number : %d",i);
        printf("\nbook name is : %s ",b[i].bname);
      //  printf("\nbook id is : %d ",b[i].id);
        printf("\nbook author is : %s ",b[i].author);
       // printf("\nbook price is : %d ",b[i].price);
        printf("\n");
    }

  }  
}


struct book findbybookname(struct book* b,int t)
{
   int i;
    char fb[20];
    printf("\nenter the book name  here :   ");
    scanf("%s",fb);
  for(i=0;i<t;i++)
  {   
    if(strcmp(fb,b[i].bname)==0)
    {
       //  printf("\n Book Number : %d",i);
        printf("\nbook name is : %s ",b[i].bname);
     //   printf("\nbook id is : %d ",b[i].id);
        printf("\nbook author is : %s ",b[i].author);
        printf("\nbook price is : %d ",b[i].price);
        printf("\n");
    }
  }
}
