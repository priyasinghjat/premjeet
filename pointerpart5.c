#include<stdio.h>
int main()
{
    int arry[5]={1,3,4,6,5};

    int *p=&arry[0];
    int *q=&arry[1];
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    p=p+2;
    printf("%d\n",p);
    printf("%d",*p);
}