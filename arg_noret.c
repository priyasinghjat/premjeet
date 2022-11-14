#include<stdio.h>
int sum(int, int);
void main()
{
    int x,y;
    printf("enter number");
    scanf("%d%d",&x,&y);
    sum(x,y);

}
int sum(int x,int y)
{
    int sum=0;
    sum=x+y;
    printf("%d",sum);
}
