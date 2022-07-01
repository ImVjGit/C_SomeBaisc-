#include<stdio.h>
#include<string.h>

struct whatsapp
{
          char name[20];
          int number ;
          int view ;
          int lastseen;
          int noofmsf;
};

void main()
{

  struct whatsapp w1;
  struct whatsapp w2;
  struct whatsapp w3;

            //user enter 
            printf("\nenter the name : ");
            scanf("%s",&w1.name);
            printf("\nenter the number : ");
            scanf("%d",&w1.number);
            printf("\nview : ");
            scanf("%d",&w1.view);
            printf("\nlastseen: ");
            scanf("%d",&w1.lastseen);
            printf("\nenter the number of msg : ");
            scanf("%d",&w1.noofmsf);
          
          //name
          strcpy(w2.name,"wasim");
          strcpy(w3.name,"deepti");
          printf("\n name :  %s",w1.name);
          printf("\n name :  %s",w2.name);
          printf("\n name :  %s",w3.name);
          
          
          // number 
          w2.number=89562342;
          w3.number=89564326;
          printf("\nnumber is : %d",w1.number);
          printf("\nnumber is : %d",w2.number);
          printf("\nnumber is : %d",w3.number);
          
          // view ;
          w2.view=5;
          w3.view=3;
          printf("\nview is : %d",w1.view);
          printf("\nview is : %d",w2.view);
          printf("\nview is : %d",w3.view);
          
          
          // lastseen;
          w2.lastseen=5;
          w3.lastseen=3;
          printf("\nlastseen this month of : %d",w1.lastseen);
          printf("\nlastseen this month of : %d",w2.lastseen);
          printf("\nlastseen this month of :%d",w3.lastseen);


          // noofmsf
          w2.noofmsf=5;
          w3.noofmsf=3;
          printf("\nno. of msg is : %d",w1.noofmsf);
          printf("\nno. of msg is %d",w2.noofmsf);
          printf("\nno. of msg is %d",w3.noofmsf);
}