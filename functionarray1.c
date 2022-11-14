#include<stdio.h>
int fun();
int main()
{
    int c;
    c=fun();
    printf("avrage of marks %d\n",c);
}
int fun()
{ 
    int i,sum=0,avg=0;
    int array[5];
    printf("enter number");
   
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf(" sum of number %d\n",sum);
    avg=sum/5;
}