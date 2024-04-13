#include<stdio.h> 
#include<math.h>
float squrt(float);
int main()
{
    float num;
    printf("Enter a number whose square root to calculate::");
    scanf("%f",&num);
    printf("The sauare root of %f is %f",num,squrt(num));
    return 0;
}
float squrt(float num)
{
    float ans=sqrt(num);
    return ans;
}