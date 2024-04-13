#include<stdio.h>
int main()
{
     char ch;
     printf("Enter a character::");
     scanf("%c",&ch);
     if (ch>='A' && ch<='Z')
     {
       printf("%c is uppercase.",ch);
     }
     else{
        printf("%c is lowercase.",ch);
     }
      return 0;
}