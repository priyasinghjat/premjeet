#include<stdio.h>

int main()
{ 
    int flag=0,i;
    char a[10]="priya";
    char b[10]="priya";
    printf("enter string\n");
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
        printf("same\n");

    }
    else
    {
    printf("not same\n");
    }
    printf("%d",flag);
}