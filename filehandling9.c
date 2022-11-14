#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50];
    char ch;
    fp=fopen("a.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs("jenny",fp);
    rewind(fp);
    while(!feof(fp))
    {
        //fgets(str,5,fp);
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}