#include<stdio.h>
int main()
{
    int a=90,b=87;
    int *p,*q;
    p=&a;
    q=&b;
    *p=*q;
    printf("%d",*p);
}