#include<stdio.h>
int sub();
int sub()
{
    int a,b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    return a-b;
}
int main()
{
    int num;
    num=sub();
    printf("%d",num);
    
    int number;
    number=sub();
    printf("%d",number);
    
}