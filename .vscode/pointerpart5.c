#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    int *q;
    *q=p;
    printf("%d",*q);
}