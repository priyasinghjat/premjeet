#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter string");
    gets(name);
    strupr(name);
    printf("%s",name);

    char name1[20];
    printf("enter string");
    gets(name1);
    strlwr(name1);
    printf("%s",name1);
}
