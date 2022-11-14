#include<stdio.h>
char*string();
int main()
{
    char *str;
    str=string();
    printf("%s",str);
}
char * string()
{
    return "priya";
}