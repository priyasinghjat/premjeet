#include<stdio.h>
#include<string.h>
int main()
{
    char name[6]="priya";
    char name1[5]="neha";
    printf("enter string\n");
    strncat(name,name1,3);
    strcat(name1,name);
    printf("%s\n",name);
    printf("%s\n",name1);
    printf("%s",name1);
}