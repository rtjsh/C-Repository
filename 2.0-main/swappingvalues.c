#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the value of a and b::\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d and b=%d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}