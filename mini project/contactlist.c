#include<stdio.h>
#include<string.h>

typedef struct contactlist
{
char name[20];
int mobileno;
}contactlist;

void addnew(contactlist *);
void listall(contactlist *);
void search(contactlist *);
void editi(contactlist *);
void delete(contactlist *);


void main()
{

    contactlist c1;
    
    
    
    editi(&c1);
    delete(&c1);
    int op;
  printf("\n Menu  \n 1 Create new \n 2 list all \n  3 search \n  4 menu   \n ans: ");
scanf("%d",&op);
            if(op==1)
            {
                    addnew(&c1);
                    main(&c1);
                    }else{
                if(op==2)
                    {
                           listall(&c1); 
                    }else{
                        if(op==3)
                        {
                                search(&c1);
                        }else{
                            if(op==4)
                            {
                                main(&c1);
                            }else{
                                printf("\n invalid options");
                            }
                        }
                    }
            }
}

void addnew(contactlist *c1)
{
printf("Enter the Name : ");
scanf("%s",c1->name);
printf("enter the Mobile Number : +91 ");
scanf("%d",&c1->mobileno);
}

void listall(contactlist *c1)
 {  
     printf("\n ");
    printf("Name : %s",c1->name);
    printf("/Mobile Number : %d",c1->mobileno);

}

void search(contactlist *c1)
{
    int num;
    int mb;
    printf("choose one \n 1 by mobile number  \n 2 by name  \n choose any one : ");
    scanf("%d",&num);
    if(num==1)
    {
        printf("\nenter mobile number :  ");
        scanf("%d",&mb);
        if(mb==c1->mobileno)
        {
            printf("\nMoblie Number found");
            printf("\nname : %s",c1->name);
        }else{
            printf("\nnot found ");
        }
    }else
    {
        if(num==2)
            {
                char str[20];
                printf("enter the name : ");
                scanf("%s",&str);
                if(strcmp(str,c1->name))
                {
                      printf("\nName found");
                      printf("\nmobile Number : %d",c1->mobileno);
                }
                else
                {
                     printf("\nnot found ");
                }
            }
    }

}

void editi(contactlist *c1)
{

}

void delete(contactlist *c1)
{

}

