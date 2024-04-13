//salting
#include<stdio.h>
#include<string.h>
void salting(char []);
int main()
{
    char pass[]="Rajesh";
    salting(pass);
    return 0;
}
void salting(char pass[])
{
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,pass);//newpass=Rajesh
    strcat(newpass,salt);//newpass=Rajesh+123
    puts(newpass);//Rajesh123
}