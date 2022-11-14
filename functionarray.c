#include<stdio.h>
int avg();
void main()
{
    int b;
    int marks[5]={45,76,43,56,77};
    b=avg(marks,5);
    printf("%d",b);
}
int avg(int marks[],int a)
{
    int sum=0,avg=0;
    for(int i=0;i<a;i++)
    {
      sum=sum+marks[i];
    }
    avg=sum/a;
}