#include<stdio.h>
int main()
{
int a,b,c;
printf("enter number");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c);
{
    printf(" a is grt\n",a);

}
if(b>a && b>c)
{
    printf("  b is grt\n",b);

}
if(c>a && c>b)
{
    printf(" c is grt\n",c);
}



    return 0;
}