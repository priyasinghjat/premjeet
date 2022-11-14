#include<stdio.h>
int even();
int main()
{
    int c;
    c=even();

}
int even()
{
    int i,n;
    printf("enter number");
    scanf("%d",&n);
    if(i%n==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}