#include<stdio.h>
#include<string.h>
int main()
{   
    int i,l;
    char ch;
    char s[20]="priya";
    printf("print the string");
    l=strlen(s);
    for(i=0;i<=l/2;i++)
    {
      ch=s[i];
      s[i]=s[l-1-i];
      s[l-1-i]=ch;
    }
    printf("%s",s);

}