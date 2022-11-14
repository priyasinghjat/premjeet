#include<stdio.h>
int main()
{   int i;
    int arry[5]={1,3,5,6};
    int a[]={2,3,4,5,6};
    int b[5]={};
    for(i=0;i<5;i++)
    {
        printf("%d\n",arry[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
}