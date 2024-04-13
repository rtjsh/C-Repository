#include<stdio.h>
void print(int);
int main()
{
    int n=5;
    printf("%u\n",&n);
    print(n);
    return 0;
}
void print(int n)//Here, n is a new variable different from above n so it has new address 
{
    printf("%u",&n);
}