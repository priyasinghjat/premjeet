#include<stdio.h>
char*name();
int main()
{
    char *ch;
    ch=name();
    printf("%s",ch);
}
char* name()
{
    char a[20];
    printf("enter a string\n");
    gets(a);
    return "priya";
    
}