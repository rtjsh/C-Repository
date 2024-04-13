#include<stdio.h>
void max(int *,int*);
int main()
{
    int a,b;
    printf("Enter the value of a and b::");
    scanf("%d %d",&a,&b);
    max(&a,&b);
    return 0;
}
void max(int *x,int *y)
{
    if(*x>*y)
    {
        printf("%d is greatest.",*x);
    }
    else
    {
        printf("%d is greatest.",*y);
    }
}