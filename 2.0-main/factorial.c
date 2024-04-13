#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("Enter the number whose factorial you want::");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      fact*=i;
    }
   printf("The factoriai is %d.",fact);
return 0;
}