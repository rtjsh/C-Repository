//Traverse(Travel) in an array
#include<stdio.h>
int main()
{
    int roll_no[30];
    for(int i=0;i<4;i++)
    {
        printf("Enter the roll no of %d student::\n",i+1);
        scanf("%d",&roll_no[i]);
    }
    printf("The roll no of 4 students are::\n");
    for(int i=0;i<4;i++)
    {
        printf("The roll no of %d student is::\n",i+1);
        printf("%d\n",roll_no[i]);
    }
    return 0;
}