#include<stdio.h>
int main()
{
    int i,j,num1,num2,count;
    printf("Enter the range:");
    scanf("%d %d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
        {
                count++;
        }
    }
         if(count==2)
            printf("%d\n",i);
    }
    return 0;
}