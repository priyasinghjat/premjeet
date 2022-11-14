#include<stdio.h>
int main()
{
    char ch;
    printf("enter n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("alphabet");
        
    }
    else
    printf("not");
    return 0;
}