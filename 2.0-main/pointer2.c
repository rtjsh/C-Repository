#include<stdio.h>
void square(int);
void _square(int *);
int main()
{
    int num=5;
    square(num);
    printf("Num=%d\n",num);
    _square(&num);
     printf("Num=%d\n",num);

    return 0;
}
void square(int n)
{
    int x = n*n;
    printf("%d\n",x);
}
void _square(int *n)//only declaring the pointer 
{
    *n = (*n) * (*n);//Here "*" is used to derefrence and access the value of address
    printf("%d\n",*n);
}