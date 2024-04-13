#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="Rajesh";
    int x,len=0;
    len=strlen(str);//calculates length of string
    printf("The length of %s is %d.\n",str,len);
    char _str[]="Anjum";
    //strcpy(str,_str);//copies _str(2nd string) to str(1st string)
    //printf("The new string is %s.\n",str);
    strcat(str," ");//adds space between the strings
    strcat(str,_str);//concatenates 1st string and 2nd string
    puts(str);
    x=strcmp(str,_str);//compares 1st string to 2nd string character by character
    printf("%d",x);//+ve = str>_str, 0= same, -ve= str<_str
    return 0;
}