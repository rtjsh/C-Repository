#include<stdio.h>
int main()
{
    int arr[10];
    int i,n;
    printf("Enter the number whose table to be printed::");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
       arr[i]=(i+1)*n;
       printf("%d\t",arr[i]);
    }
    return 0;
}

