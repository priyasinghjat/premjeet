#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char name[10];
    printf("enter string");
    gets(name);
    puts(name);
    count=strlen(name);
    puts(name);
    printf("%d",count);
}