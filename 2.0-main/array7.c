//Element insertion in an array
#include<stdio.h>
int main()
    {
       int arr[20],n,x,pos;
       printf("Enter the number of elements::");
       scanf("%d",&n);
       printf("Enter the elements::\n");
       for(int i=0;i<n;i++)
       {
        scanf("%d",&arr[i]);
       }
       printf("Array elements are::\n");
       for(int i=0;i<n;i++)
       {
        printf("%d\t",arr[i]);
       }
       printf("\nEnter the position where element to be inserted::\n");
       scanf("%d",&pos);
       printf("Enter the element to be inserted::\n");
       scanf("%d",&x);
       for(int i=n;i>=pos;i--)
       {
        arr[i]=arr[i-1];
       } 
       arr[pos]=x;
       printf("New array elements are::\n");
       for(int i=0;i<n;i++)
       {
        printf("%d\t",arr[i]);
       }
       return 0;
    }
