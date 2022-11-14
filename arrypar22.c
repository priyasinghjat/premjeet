#include<stdio.h>
int main()
{
    int arry1[5]={1,2,3,4,5};
    int arry2[5]={5,4,3,2,1};
    int i,j;
    printf("print arry");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arry1[i]);
    }
    for(j=0;j<5;j++)
    {
        printf("%d\n",arry2[j]);
    }
}