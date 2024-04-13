#include<stdio.h>
int sumofdigits(int);
int main()
{
    int num;
    printf("Enter a number whose sum of digits to calculate::");
    scanf("%d",&num);
    printf("Sum of digits of %d  is %d",num,sumofdigits(num));
}
int sumofdigits(int n)
{
    int rem,sum=0;
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}
