#include<stdio.h>
void sum()
{
    int a,b,sum=0;
    printf("enter a number");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum of two number is %d",sum);
}
void main()
{
    sum();
}