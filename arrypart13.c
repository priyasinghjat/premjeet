#include<stdio.h>
int main()
{
    int arry1[2][3];
    int arry2[2][3];
    int sum[2][2];
    int i,j;
    printf("enter number");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d%d",&arry1[i][j],&arry2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arry1[i][j]+arry2[i][j];
            printf("%d",sum[i][j]);
        
        }
        
    }
    
}