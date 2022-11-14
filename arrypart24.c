#include<stdio.h>
int main()
{
    int i;
    int arry1[5]={1,2,3,4,5};
    int arry2[5];
    
    printf("enter number");
    for(i=0;i<5;i++)
    {
        arry2[i]=arry1[i];
    }
    printf("enter first array\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arry1[i]);
    }
    printf("enter second array\n");
    for(i=0;i<5;i++)
    {
       printf("%d\n",arry2[i]);
    }

    
}