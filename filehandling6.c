#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    
    char str[10];
    fp=fopen("b.text","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    for(int i=0;i!=strlen(str);i++)
    {
        str[i]=fgetc(fp);
        printf("%s",str[i]);
    }

    fclose(fp);
}