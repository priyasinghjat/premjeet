#include<stdio.h>
int swap();
int swap()
{
    int a,b;
    printf("enter a nuber");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\n%d",a,b);
}int main()
{
    int c;
    c=swap();

}