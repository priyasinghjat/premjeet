#include<stdio.h>
int square();
int square()
{
    int n,number;
    printf("enter a number");
    scanf("%d",&n);
    number=n*n;
    return number;
}int main()
{
    int num;
    num=square();
    printf("%d",num);
}