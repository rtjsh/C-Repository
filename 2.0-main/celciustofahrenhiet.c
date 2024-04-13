#include<stdio.h>
void celtofah(int);
int main()
{
    float cel;
    printf("Enter the temperature in celcius::\n");\
    scanf("%f",&cel);
    celtofah(cel);
}
void celtofah(int cel)
{
    float fah;
    fah=32+cel*(float)9/5;
    printf("The temperature in fahrenhiet scale is %f.",fah);
    return 0;
}
