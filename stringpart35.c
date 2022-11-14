#include<stdio.h>
int main()
{
    char name[20];
    printf("enter string");
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
    }
    puts(name);

    char name1[20];
    printf("enter string");
    gets(name1);
    for(int i=0;name1[i]!='\0';i++)
    {
        if(name1[i]>='a' && name1[i]<='z')
        {
            name1[i]=name1[i]-32;
        }
    }
    puts(name1);
}