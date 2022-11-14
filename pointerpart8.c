#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    {
        int a=10;
        ptr=&a;
        printf("%d\n",*ptr);
    }
    printf("%d",*ptr);
}