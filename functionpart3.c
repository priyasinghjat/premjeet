#include<stdio.h>
int sum();
int sum()
{
int a,b;
printf("enter number");
scanf("%d%d",&a,&b);
return a+b;
}
int main()
{
    int add;
    add=sum();
    printf("%d",add);
}