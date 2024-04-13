#include<stdio.h>
void vcount(char []);
int main()
{
    char str[20];
    printf("Enter a string::\n");
    gets(str);
    vcount(str);
    return 0;
}
void vcount(char str[20])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("The occurance of vowel is %d.",count);
}