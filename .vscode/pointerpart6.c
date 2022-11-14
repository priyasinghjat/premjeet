#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **r=&p;
    int ***t=&r;
    printf("%d%d%d%d",a,*p,*(*r),*(*(*t)));
}