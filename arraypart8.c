#include<stdio.h>
int main()
{
    int marks[5];
    float sum=0;
    float avg;
    int i;
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
    printf("%f\n",sum);
    printf("%f",avg);
}