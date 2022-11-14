#include<stdio.h>
void fun();
void main()
{
    fun();
}
void fun()
{
    int a=40;
    int b=30;
    int sum=0,sub=0,multi=1;
    float div;
    sum=a+b;
    multi=a*b;
    sub=a-b;
    div=a/b;
    printf("%d\n%d\n%f\n%d",sum,multi,div,sub);
}