3 create a structure time with data member as hrs ,min, sec  accept the values of all these member from user and display them also perform addition of two time variables and display the result. if sec goes beyond 60,carry it to min etc. add  a method to convert the given time into sec
#include<stdio.h>
#include<string.h>

 struct time
{
    int hours;
    int minutes;
    int seconds;
};

void  main(){
   
    struct time t1;
    struct time t2;
    struct time temp;
    int h,m,s;
    int ss;
	int p ;
    printf("enter the Hours : ");
    scanf("%d",&t1.hours);
    printf("enter the Minutes : ");
    scanf("%d",&t1.minutes);
    printf("enter the Seconds : ");
    scanf("%d",&t1.seconds);    
    
     printf("enter the Hours : ");
    scanf("%d",&t2.hours);
    printf("enter the Minutes : ");
    scanf("%d",&t2.minutes);
    printf("enter the Seconds : ");
    scanf("%d",&t2.seconds);  
    temp.hours=t1.hours+t2.hours;
    temp.minutes=t1.minutes+t2.minutes;
    temp.seconds=t1.seconds+t2.seconds;
//    s = temp.seconds / 60 ;
  //  ss= temp.seconds %60;
    //p = temp.minutes+s;
    //display
    if(temp.hours>12||temp.minutes>60||temp.seconds>60)
    {
        prtinf("\n error");
        exit("0");
    }
    while(1)
    {
        temp.seconds++;
        if(temp.seconds>59)
        {
            temp.minutes++;
            temp.seconds=0;

        }
        if(temp.minutes>59)
                {
                   temp.hours++;
                   temp.minutes=0; 
                }
        if(temp.hours)
        {
            temp.hours=1;
        }
    }

    printf("\ntime hours=%d",temp.hours);
    printf("\ntime minutes =%d",p);
    printf("\ntime seconds =%d",ss);
    printf(" hr %d: min  %d : sec %d",temp.hours,p,ss);
}
