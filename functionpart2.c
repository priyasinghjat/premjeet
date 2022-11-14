#include<stdio.h>
char fun();
char fun()
{
    char c;
    printf("enter char");
    scanf("%c",&c);
    return 'c';    //c
}
char main()
{
    char ch;
    ch=fun();
   printf("%c",ch);
}