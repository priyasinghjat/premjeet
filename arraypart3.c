#include<stdio.h>
int main()
{   int i;
    char arry[7];
    printf("enter char");
    for(i=0;i<7;i++)
    {
        scanf("%c",&arry[i]);
    }
    for(i=0;i<7;i++)
    {
        printf("%c",arry[i]);
    }
}