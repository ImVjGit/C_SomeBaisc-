//function  1) Encryption and Decryption ?
#include<stdio.h>
#include<string.h>
void Encrypted(char*);
void Decrypted(char*);
void main()
{
   int i, x;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);

   printf("\nPlease choose following options:\n");
   printf("1 Encrypt the string.\n");
   printf("2 Decrypt the string.\n");
   scanf("%d",&x);

   
            if(x==1)
            {
            Encrypted(str);
            }
            else{
            if(x==2)
            {
            Decrypted(str);
            }
            else
            {
            printf("\nError\n");
            }
            }

}

void Encrypted(char* str )
{
    int i ;
for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);

}

void Decrypted(char* str)
{
    int i ;
for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value

      printf("\nDecrypted string: %s\n", str);
}