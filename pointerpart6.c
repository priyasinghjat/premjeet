#include<stdio.h>
int main()
{
    int d;
    int arry[5]={2,43,56,78,4};
    int *p=&arry[0];
    int *q=&arry[3];
    printf("%d\n",p);
    printf("%d\n",q);
    d=*p-*q;
    printf("%d",d);
    
}