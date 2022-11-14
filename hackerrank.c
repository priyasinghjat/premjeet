#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max();
int main() 
{
  
    int e;
    e=max();
    printf("%d",e);
}
int max()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=b && a>=c && a>=d)
    {
        printf("%d is grt",a);
    }
    if(b>=a && b>=c && b>=d)
    {
        printf("%d is grt",b);
    }
    if(c>=a && c>=b && c>=d)
    {
        printf("%d is grt ",c);
    }
    if(d>=a && d>=b && d>=c)
    {
        printf("%d is grt",d);
    }
    
}
