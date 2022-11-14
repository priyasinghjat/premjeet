#include<stdio.h>
int main()
{
    int a=90,b=98,c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*q;
    printf("%d",c);
    
}