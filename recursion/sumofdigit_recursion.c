#include <stdio.h>
int sumOfDigits(int num);

int main()
{
    int num, sum;
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits = %d ", sum);
}

int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
    else
   return ((num % 10) + sumOfDigits(num / 10));
}