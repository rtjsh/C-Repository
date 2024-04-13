#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum,org_num;
    printf("Enter a number::");
    scanf("%d",&num);
    org_num=num;
    while(num!=0)
    {
        rem=num%10;
        sum+=pow(rem,3);
        num/=10;
    }
    if(sum==org_num)
    {
        printf("%d is Armstrong.",org_num);
    }
    else{
        printf("%d is not armstrong.",org_num);
    }
    return 0;
}