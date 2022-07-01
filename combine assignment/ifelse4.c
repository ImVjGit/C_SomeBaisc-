//4) Accept 3 no.'s from user and find which is greater and also find that is it divisible by other two and if yes then by whom?
#include<stdio.h>
void main()
{
    int num1 ;
    int num2 ;
    int num3 ;
    int div1;
    int div2;
    int div3;
    printf("\nEnter the first number :  ");
    scanf("%d",&num1);
    printf("\nEnter the Second number :  ");
    scanf("%d",&num2);
    printf("\nEnter the Second number :  ");
    scanf("%d",&num3);

if(num1>num2 &num1>num3)
{
    printf("max number is : %d", num1);
     div1 = num2%num1;
    div2 = num3%num1;
    if(div1==0&&div2==0)
    {
        printf("\n %d is divisible by both the number ",num1);        
    }else
    {
        div1 = num1%num2;
        div2 = num3%num2;
        if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num2);
        }else{
                div1 = num1%num3;
                div2 = num2%num3;
                if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num3);
        }else{
            printf(" \n none of one is divisible ");
        }
        }

    }
    
}else{
    if(num2>num3)
    {
        
    printf("max number is : %d", num2);
     div1 = num2%num1;
    div2 = num3%num1;
    if(div1==0&&div2==0)
    {
        printf("\n %d is divisible by both the number ",num1);        
    }else
    {
        div1 = num1%num2;
        div2 = num3%num2;
        if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num2);
        }else{
                div1 = num1%num3;
                div2 = num2%num3;
                if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num3);
        }else{
            printf(" \n none of one is divisible ");
        }
        }

    }

       
}else{
    
printf("max number is : %d", num3);
     div1 = num2%num1;
    div2 = num3%num1;
    if(div1==0&&div2==0)
    {
        printf("\n %d is divisible by both the number ",num1);        
    }else
    {
        div1 = num1%num2;
        div2 = num3%num2;
        if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num2);
        }else{
                div1 = num1%num3;
                div2 = num2%num3;
                if(div1==0&&div2==0)
        {
            printf("\n %d is divisible by both the number ",num3);
        }else{
            printf(" \n none of one is divisible  ");
        }
        }

    }

   
}

}
}   