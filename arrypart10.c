#include<stdio.h>
int main()
{
    int arry1[5];
    int arry2[5];
    int sum[5];
    int i;
    printf("enter number");
    for(i=0;i<5;i++)
    {
        scanf("%d%d",&arry1[i],&arry2[i]);
    }
    for(i=0;i<5;i++)
    {
        sum[i]=arry1[i]+arry2[i];
        printf("%d is %d\n",i,sum[i]);

        
    }
}