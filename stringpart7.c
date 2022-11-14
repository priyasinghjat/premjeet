#include<stdio.h>
int main()
{
    char name[30];
    printf("enter string");
    scanf("%s\n",name);
    printf("%5s\n",name);
    printf("%10.5s",name);
    puts(name);
    puts(name);
    printf("%s\n",&name);
    printf("%s",&name[2]);
}