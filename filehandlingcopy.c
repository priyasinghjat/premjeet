#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("abc.text","r");
    if(fp1=NULL)
    {
        printf("error");
        exit(1);

    }
    fp2=fopen("next.text","w");
    if(fp2==NULL)
    {
        printf("error2");
        exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }
    printf("done");
    fclose(fp1);
    fclose(fp2);
}