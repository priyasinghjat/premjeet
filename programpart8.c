#include<stdio.h>
int fac()
{
    int i,n,fact=1;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    
    }return fact;
}
int main()
{
    int c;
    c=fac();
    printf("%d",c);
    int p;
    p=fac();
    printf("%d",p);
}