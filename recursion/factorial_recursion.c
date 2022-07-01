#include<stdio.h>
int multiplyNumbers(int n);
void main() {
    int n;
    int f;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    f = multiplyNumbers(n);
    printf("Factorial of %d = %ld", n, f);
}

int multiplyNumbers(int n)
{
    int ans;
    if (n>=1)
    {
        ans =  n*multiplyNumbers(n-1);
        return ans;
    }
  else
    {
        return 1;
    }
        
}