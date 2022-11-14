#include<stdio.h>
int main()
{
    int arry[5]={2,2,4,4,4};
    int i,count=0;
    //printf("%d\n",arry[i]);
    for(i=0;i<5;i++)
    {
        if(arry[i]==4)
        count++;
    }
    printf("%d",count);
}