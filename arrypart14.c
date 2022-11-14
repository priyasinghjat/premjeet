#include<stdio.h>
int main()
{
    int arry1[2][2];
    int sum=0,i,j;
    printf("enter number");
    for(i=0;i<2;i++)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&arry1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d",arry1[i][j]);
            sum=sum+arry1[i][j];
            
        }
    }
    printf("%d",sum);
}