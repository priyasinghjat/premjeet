#include<stdio.h>
int main()
{
    int arry1[2][3];
    int arry2[2][3];
    int sum[2][3];
    int i,j;
    printf("enter first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n\t",&arry1[i][j]);
        }
    }
    printf("enter second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\n\t",&arry2[i][j]);
        }

    }
    printf("enter first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arry1[i][j]);
        }
        printf("\n");
    }
    printf("enter second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arry2[i][j]);
        }
        printf("\n");
    }
    
    printf("enter third matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arry1[i][j]+arry2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}