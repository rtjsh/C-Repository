//Reversing array elements
#include<stdio.h>
void arrayrev(int arr[],int n);
void printarr(int arr[],int n);
int main()
{
    int arr[10];
    printf("Enter the array elements::");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    arrayrev(arr,5);
    printarr(arr,5);
    return 0;
}
void arrayrev(int arr[],int n)//In arrray there is call by reference
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];//Here, arr[n-1-i] represents last array element
        arr[n-1-i]=temp;
    }
}
void printarr(int arr[],int n)
{
    printf("After reversing, the array elements are::\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}