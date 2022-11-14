#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char a[20];
    char b[20];
    printf("enter first string");
    gets(a);
    printf("enter second string");
    gets(b);
    value=strcmp(a,b);
    if(value==0)
    {
        printf("same");
    }
    else{
        printf("not same");
    }
    printf("%d",value);
}