#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        printf("a is grt then b");
    }
    else if(b>c)
    {
        printf("b is grt then c");
    }
    else
    {
        printf("c is grt then a");
    }
    return 0;
}