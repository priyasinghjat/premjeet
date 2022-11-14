#include<stdio.h>
int table();
int table()
{
    int i,n,table=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d\n",table);
    }
        
    
}
int main()
{
    int n;
    n=table();
    n=table();
}