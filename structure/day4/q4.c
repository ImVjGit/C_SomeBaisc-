//4 write a program to create an array for 10 players.for each player stroe name,no. of matches playes,runs,wickets takes.
//	a create function to accept the information of each player.
//	b create function to display the information of all the players
//	c display the infoamtion of player who made maximum runs and the one who took maximum number of wickets
#include<stdio.h>
#include<string.h>

struct players
{
    char name[10];
    int matchplay;
    int run;
    int wickets;
};

struct players acceptinfo(struct players* ,int );
void main()
{
    struct players p[10];
    int i;
    acceptinfo(p,10);
    
    for(i=0;i<10;i++)
    {   printf("\n");
        printf("player info number : %d ", i);
        printf("\nname :  %s ",p[i].name);
        printf("\nmatch play :  %d ",p[i].matchplay);
        printf("\nRun :  %d ",p[i].run);
        printf("\nWickets :  %d ",p[i].wickets);
        printf("\n");
    }
    int max=0;
    for(i=0;i<10;i++)
    {
        if(p[i].run>max)
        {
            max = p[i].run; 
        }
    }
    printf("\n*******************Max Run*******************");
    printf("\nmaximum runs is %d",max);
    printf("\n**************************************");
    int maxw=0;
    for(i=0;i<10;i++)
    {
        if(p[i].wickets>maxw)
        {
            maxw = p[i].wickets; 
        }
    }
    printf("\n*******************Max Wicket*******************");
    printf("\nmaximum runs is %d",maxw);
    printf("\n**************************************");
    
    for(i=0;i<10;i++)
    {
        if(max==p[i].run)
            {
                printf("\n**************************************");
            printf("\n player get maximux run ");
            printf("player info number : %d ", i);
            printf("\nname :  %s ",p[i].name);
            printf("\nmatch play :  %d ",p[i].matchplay);
            printf("\nRun :  %d ",p[i].run);
            printf("\nWickets :  %d ",p[i].wickets);
            printf("\n**************************************");
            printf("\n");

            }
        if(maxw==p[i].wickets)
            {
            printf("\n**************************************");
            printf("\n player get maximux wicket ");
            printf("player info number : %d ", i);
            printf("\nname :  %s ",p[i].name);
            printf("\nmatch play :  %d ",p[i].matchplay);
            printf("\nRun :  %d ",p[i].run);
            printf("\nWickets :  %d ",p[i].wickets);
            printf("\n**************************************");
            printf("\n");

            }


    }

    

}


struct players acceptinfo(struct players* p,int t)
{
    int i;
 for(i=0;i<t;i++)
    {
        printf("\nname :  ");
        scanf("%s",p[i].name);

        printf("\nmatch play :  ");
        scanf("%d",&p[i].matchplay);
        
        printf("\nRun :  ");
        scanf("%d",&p[i].run);
        
        printf("\nWickets :  ");
        scanf("%d",&p[i].wickets);
    }
   
}
