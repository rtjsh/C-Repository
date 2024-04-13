//alphabet is/is not in a string
#include<stdio.h>
int main()
{
    char str[]="Rajesh",x;
    int count=0;
    printf("Enter the character to be checked::");
    scanf("%c",&x);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==x)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("%c is in string.",x);
    }
    else{
        printf("%c is not in string.",x);
    }
    return 0;
}