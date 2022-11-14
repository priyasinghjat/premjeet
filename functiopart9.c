#include<stdio.h>
int sumfac();
int main()
{
    int c;
    c=sumfac();
    printf("%d",c);
}
int sumfac()
{
    int a,b,n,i,fact=1,sum=0;
    printf("enter number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a,b;i++)
    {
        fact=fact*i;
        {
            sum=sum+fact;
        }
        printf("%d",sum);
    }return sum;
}