#include<stdio.h>
int main()
{
    int arry[3][3];
    int i,j,k,l;
    printf("enter number");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {   k=0;
        l=0;
        for(j=0;j<3;j++)
        {
            k=k+arry[i][j];
            l=l+arry[j][i];
        }
        printf("%d\n%d\n",k,l);
    }
}