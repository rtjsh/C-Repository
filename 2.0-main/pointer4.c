#include<stdio.h>
void dowork(int, int,int *,int *);
int main()
{
    int a,b,sum,diff;
    printf("Enter the value of a::");
    scanf("%d",&a);
    printf("Enter the value of b::");
    scanf("%d",&b);
    dowork(a,b,&sum,&diff);
    printf("The sum is %d and difference is %d.",sum,diff);
    return 0;
}
void dowork(int a,int b,int *sum,int *diff)
{
    *sum=a+b;
    *diff=a-b;
}