#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int *ptr=&a;
    printf("%d\n",*ptr);

    
    int *b=(int*)malloc(sizeof(int));
    *b=18;
    printf("%d",*b);
}