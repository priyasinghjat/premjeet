#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50];
    fp=fopen("d.text","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter a name");
    gets(str);
    for(int i=0;i!=strlen(str);i++)
    fputc(str[i],fp);
    fclose(fp);

    
}