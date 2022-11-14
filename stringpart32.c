#include<stdio.h>
#include<string.h>
int main()
{
    char name[30]="PRIYA";
    printf("print string\n");
    strlwr(name);
    printf("%s\n",name);

    char name1[30]="priya";
    printf("enter string\n");
    strupr(name1);
    printf("%s",name1);
}