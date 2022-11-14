#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    int linesCount=0;
    char ch;
    fp=fopen("b.text","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        printf("%c",ch);
        
        linesCount++;

    }
    fclose(fp);
    printf("%d",linesCount);
    
}