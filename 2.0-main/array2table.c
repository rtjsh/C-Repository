#include<stdio.h>
int main()
{
    int arr[2][10];
    int i,n,m;
    printf("Enter two numbers whose table to be printed::");
    scanf("%d %d",&n,&m);
    for(int j=0;j<10;j++)
       {
       arr[0][j]=(j+1)*n;
       printf("%d\t",arr[0][j]);
       }
    printf("\n");
     
    for(int j=0;j<10;j++)
        {
        arr[1][j]=(j+1)*m;
        printf("%d\t",arr[1][j]);
       }

    return 0;
}

