#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("a is largest\n",a);
        
    }else
    {
        printf("b is largest\n",b);

    }
    if(b>=c)
    {
        printf(" b is largest\n",b);
    }
    else{
        printf("c is largest\n",c);
    }
    return 0;
}