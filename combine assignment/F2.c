//2) Check whether the number is pallindrome or not?
#include<string.h>
#include<stdio.h>
int palindrome(int);
void main()
{
int num;
int p;
        printf("enter the number here: ");
        scanf("%d",&num);
        p = palindrome(num);
        if(p==num)
        {
        printf("%d Number is palindrome \n",p);
        }else{
        printf("%d Number is not palindrome \n",p);
        }
}

int palindrome(int num)
{
    int value ;
    int rev=0;
    int rem;
    value = num;
    for (value!=0;rem=value%10; value/=10)
    {
    rev= rev*10+rem;
    }
    return rev;
}
