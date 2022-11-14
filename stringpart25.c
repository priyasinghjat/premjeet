#include<stdio.h>
#include<string.h>

int main()
{
    int value;
    char a[10]="priya";
    char b[10]="prIYa";
    printf("enter string");
    value=strcmp(a,b);
    if(value==0)
    {
        printf("same");
    }
    else{
      printf("not same");
    }
    printf("%d",value);
}