#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    char str[10];
    fp=fopen("abc.text","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fgets(str,4,fp);
    printf("%s",str);
    /*while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }*/

    fclose(fp);
}