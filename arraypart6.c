#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter array");
    for(i=4;i>=0;i--)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
        
    }
}