#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],i;
    int count=0;
    printf("enter string");
    gets(name);
    count=strlen(name);
    printf("%d",count);
}