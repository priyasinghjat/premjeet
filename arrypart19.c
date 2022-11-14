#include<stdio.h>
int main()
{
    int arry1[2][3];
    int arry2[2][3];
    int multi[2][3];
    int i,j;
    int multi1=1;
    int sum1=0;
    int sum[i][j];
    printf("enter first arry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arry1[i][j]);
            printf("\n");
        }
    }
    printf("enter second arry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arry2[i][j]);
            printf("\n");
        
        }
    }
    printf("print first arry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arry1[i][j]);
            
        }
        printf("\n");
    }
    printf("print second arry\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arry2[i][j]);
            
        }
        printf("\n");
    }
    printf("array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           
           
            multi[i][j]=arry1[i][j] * arry2[i][j];
             sum1=sum[i][j]+multi[i][j];
            
            
            printf("%d\t",multi[i][j]);
            printf("%d\t",sum1);
        }
        printf("\n");
    }

}