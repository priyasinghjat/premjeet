#include<stdio.h>
int main()
{   int i;
    float arry[5];
    printf("enter float number");
    for(i=0;i<5;i++)
    {
        scanf("%f",&arry[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%f",arry[i]);
    }
}