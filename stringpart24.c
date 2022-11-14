#include<stdio.h>
#include<string.h>
int main()
{  
    int l1,l2,i;
    char a[20]="neha";
    char b[20]="priya";
    printf("enter the stirng\n");
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<=l2;i++)
    {
        a[l1+i]=b[i];

    }
    printf("%s\n",a);
    printf("%s",b);
}