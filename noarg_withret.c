#include<stdio.h>
int sum(void);
void main()
{
    int n;
    n=sum();
    printf("%d",n);
    
}
int sum()
{
    int a,b,sum=0;
    printf("enter number");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;//if we return a then the replace the value of sum
}