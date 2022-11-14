#include<stdio.h>
int string();
int main()
{
    char i;
    i=string();
}
int string()
{
    char name[10];
    printf("enter string\n");
    gets(name);
    printf("%s",name);
}