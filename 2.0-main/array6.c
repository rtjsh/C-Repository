//Frequency of a number in an array
#include<stdio.h>
void ncount(int arr[],int n);
int main()
{
    int arr[20],n;
    printf("Enter the number of elements::");
    scanf("%d",&n);
    printf("Enter the elements::");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ncount(arr,n);
    return 0;
}
void ncount(int arr[20], int n)
{
    int count=0,x;
    printf("Enter the number whose frequency to be checked::");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("%d is repeated %d times.",x,count);
}