//3) Check whether the string is pallindrome or not?
#include<string.h>
#include<stdio.h>
void palindrome(char*);
void main()
{
            char str[100];
            int len;
            printf("enter the sentence here : ");
            gets(str);
            len = strlen(str);
             palindrome(str);
           

}

void  palindrome(char* str)
{
int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);

}
