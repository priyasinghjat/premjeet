#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20];
    printf("enter first string");
    gets(a);
    printf("enter second string");
    gets(b);
    strcat(a,b);
    printf("%s",a);
}