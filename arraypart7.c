#include<stdio.h>
int main()
{
    int marks[5],i;
    float sum=0,avg;
    printf("enter marks");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
    
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("%d",sum);
    printf("%f",avg);
}