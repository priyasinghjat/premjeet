#include<stdio.h>
int main()
{
    int i,count=0;
    char name[50];
    printf("enter string");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    count++;
    printf("%d",count);
}