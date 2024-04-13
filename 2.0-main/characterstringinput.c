#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    int i=0;
    while(ch != '\n')//loop works as gets()
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';//taking string input as character so /0 should be added to make it a string
    puts(str);
    return 0;
}