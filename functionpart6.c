#include<stdio.h>
int multi();
int multi()
{
    int a,b,multi=1;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    multi=a*b;
    return multi;
}
int main()
{
    int x;
    x=multi();
    printf("%d",x);
}