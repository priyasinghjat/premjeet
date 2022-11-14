#include<stdio.h>
int main()
{   
    int arry[5];
    int i,count=0;
    printf("enter the number");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&arry[i]);
    }
    
    for(i=0;i<5;i++)
    {
        if(arry[i]==3)
        count++;
    }
    
    printf("%d",count);
}