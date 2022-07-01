#include<stdio.h>

int CheckPrime(int,int);
int main()
{
    int num;
    printf("Enter your Number:");
    scanf("%d",&num);

    if(CheckPrime(2,num)==0)
        printf("It is a Prime Number.");
    else
        printf("It is not a Prime Number.");
}

int CheckPrime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else
        return CheckPrime(i+1,num);
    
}