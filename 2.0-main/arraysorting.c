#include<stdio.h> 
void largest(int arr[],int n);
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
    largest(arr,n);
    return 0;
}

void largest(int arr[],int n)
{
    int temp,i;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The largest number is %d\n",arr[i]);
     printf("The sorted elements are::");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}