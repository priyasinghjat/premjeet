#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter string");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}