//2)	Accept 2 no. from user for division if second no. is zero then print an error?
#include<stdio.h>
void main()
{
    int num1 ;
    int num2 ;
    float div;
    printf("\nEnter the first number :  ");
    scanf("%d",&num1);
    printf("\nEnter the Second number :  ");
    scanf("%d",&num2);
    if(num2==0)
    {
        printf("\t \n!!error ");
    }else{
        div = num1 / num2 ;
        printf("\ndivision is : %f ",div);
    }

}