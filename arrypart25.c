#include<stdio.h>
int main()
{
    int arry[5]={2,3,4,5,6};
    int i,max,min;
    printf("enter max or min number");
    for(i=0;i<5;i++)
    {
        printf("%d",arry[i]);
        printf("\n");
    }
    max=arry[0];
    min=arry[0];
    for(i=0;i<5;i++)
    {
        if(arry[i]>max)
        {
            max=arry[i];
        }

        if(arry[i]<min)
        {
            min=arry[i];
        }
        
        
    }
     printf("%d\n",min);
     printf("%d",max);
   
}