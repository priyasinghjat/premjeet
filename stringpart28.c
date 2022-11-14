#include<stdio.h>
int main()
{
    int flag=0,i;
    char a[20];
    char b[20];
    printf("enter first string");
    gets(a);
    printf("enter second string");
    gets(b);
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
    printf("%d",flag);
}