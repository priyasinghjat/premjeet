#include<stdio.h>
int swap();
int swap()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);
}
int main()
{
    int num;
    num=swap();

}