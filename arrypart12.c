#include<stdio.h>
int main()
{
    int arry[2][3];
    int i,j;
    printf("enter number");
    for(i=1;i>=0;i--)
    {
        for(j=2;j>=0;j--)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arry[i][j]);
        }
    }
}