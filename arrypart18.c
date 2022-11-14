#include<stdio.h>
int main()
{
    int arry1[2][2];
    int arry2[2][2];
    int multi[2][2];
    int i,j;
    printf("enter 1 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\n\t",&arry1[i][j]);
        }
        printf("\n");
    }
    printf("enter 2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\n\t",&arry2[i][j]);
        }
        printf("\n");
    }
    printf("enter 1 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arry1[i][j]);
        }
        printf("\n");
    }
    printf("enter 2 matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arry2[i][j]);
        }
        printf("\n");
    }
    printf("enter matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            multi[i][j]=arry1[i][j]*arry2[i][j];
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }

}