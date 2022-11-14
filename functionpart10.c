#include<stdio.h>
int main()
{
    int a,b,sum=0;
    int *c;
    int *d;
    int *e;
    c=&a;
    d=&b;
    e=&sum;
    printf("enter number");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",*e);
    printf("%d\n",e);

}