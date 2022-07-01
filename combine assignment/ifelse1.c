//1) Accept PCM marks from user and find percentage,division and total?

#include<stdio.h>

void main()
{
    int physics;
    int chemistry;
    int math;
    int op;
    float Percentage;
    int total;
    
    printf("enter the physics mark : ");
    scanf("%d",&physics);
    printf("enter chemistry mark : ");
    scanf("%d",&chemistry);
    printf("enter Maths  mark : ");
    scanf("%d",&math);
   printf("******************************");
    printf("\n Total : ");
    total = physics + chemistry + math;
    printf(" %d ", total);
    
  printf("\n Percentage :  ");
        Percentage = total / 3;
        printf(" %f",Percentage);
   printf("\n Division :  ");
  
                    if(Percentage> 60 )
                    {
                        printf("First class Division ");
                    }else{
                        if(Percentage<60&&Percentage>48)
                        {
                            printf("Second class Division ");
                        }else{
                            if(Percentage<48&&35>Percentage)
                            {
                                printf("Pass");
                            }else{
                                printf("Fail !!!");
                            }
                        }
                    } 
                    printf("\n******************************"); 
}