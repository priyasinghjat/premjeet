#include<stdio.h>
int main()
{
    int a,b,c;
    int *p=&a;
    int *q=&b;
    int *r=&c;

    printf("enter number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c);
    printf("%d",r);
}