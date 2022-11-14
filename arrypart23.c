#include<stdio.h>
int main()
{
    int arry[3]={3,4,5};
    int i,sum=0;
    printf("enter arry");
    for(i=0;i<3;i++)
    {   
        sum=sum+arry[i];
    
    }
    printf("%d",sum);
}