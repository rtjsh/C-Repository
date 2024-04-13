//Index printing in array
#include<stdio.h>
void slice(char []);
int main()
{
    char ch[]="Rajesh";
    slice(ch);
    return 0;
}
void slice(char ch[])
{
    int n=1,m=3;
    char _ch[100];
    int j=0;
    for(int i=n;i<=m;i++)
    {
        _ch[j]=ch[i];
        j++;
    }
    _ch[j]='\0';
    puts(_ch);
}