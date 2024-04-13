#include<stdio.h>
int sum(int);
int main()
{
    printf("The sum is %d.",sum(6));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1 + n;
}