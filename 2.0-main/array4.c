//count odd numbers in an array
#include<stdio.h>
void oddcount(int arr[],int n);
int main()
{
    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    oddcount(arr,10);
    return 0;
}
void oddcount(int arr[],int n)
{   
    int count=0;
    printf("Odd numbers are::\n");
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\n",arr[i]);
            count++;
        }
    }
    printf("The count of odd numbers are %d.",count);
}
