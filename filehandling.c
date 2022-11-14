#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char ch='a';
    fp=fopen("abc.txt","w");
    if(fp==0)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);

}