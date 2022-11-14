#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    int pos;
    int i;
    char str[50];
    fp=fopen("b.text","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
   // pos=ftell(fp);
   // printf("%d",pos);
   // ch=fgetc(fp);
    //printf("%c",ch);
    //fseek(fp,8,SEEK_SET);
    //ch=fgetc(fp);
    //printf("%c",ch);
    fscanf(fp,"%s",str);
    printf("%s",str);
    printf("%d",ftell(fp));

    fclose(fp);
}