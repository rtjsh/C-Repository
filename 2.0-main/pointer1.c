//pointer to pointer
#include<stdio.h>
int main()
{
   int i=5;
   int *ptr;
   ptr = &i;
   int **pptr;
   *pptr = &ptr;
   printf("i=%d.\n",i);
   printf("*ptr=%d.\n",*ptr);
   printf("ptr=%d.\n",ptr);
   printf("**pptr=%d.\n",**pptr);
   printf("pptr=%d.\n",pptr);
   return 0;
}