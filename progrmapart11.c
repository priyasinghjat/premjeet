#include<stdio.h>
int cube();
int cube()
{
    int n,number;
    printf("enter a number");
    scanf("%d",&n);
    number=n*n*n;
    return number;
}
int main()
{
    int num;
    num=cube();
    printf("%d",num);
}
