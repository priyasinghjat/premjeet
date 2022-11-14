#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50]="priya singh jat";
    fp=fopen("b.text","r");
    //fp=fopen("b.text","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    for(int i=0;i!=strlen(str);i++)
    
    fputc(str[i],fp);
    fclose(fp);
}