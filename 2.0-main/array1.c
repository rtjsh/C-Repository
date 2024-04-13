//Input output in array
#include<stdio.h>
int main()
{
    int marks[4];//Declaration of an array
    printf("Enter marks of Physics::");
    scanf("%d",&marks[0]);
    printf("Enter marks of Chemistry::");
    scanf("%d",&marks[1]);
    printf("Enter marks of Mathematics::");
    scanf("%d",&marks[2]);

    printf("%d %d %d\n",marks[0],marks[1],marks[2]);//Display array elements
    printf("%d %d %d\n",&marks[0],&marks[1],&marks[2]);//Display memory locations
    return 0;
}