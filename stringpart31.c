#include<stdio.h>
#include<string.h>
int main()
{   
    int i,l,n;
    char ch;
    char s[20];
    printf("print the string");
    gets(s);
    l=strlen(s);
    for(i=0;i<=l/n;i++)
    {
      ch=s[i];
      s[i]=s[l-1-i];
      s[l-1-i]=ch;
    }
    printf("%s",s);

}