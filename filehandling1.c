#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50]="priya singh jat";
    fp=fopen("a.text","r");
    //fp=fopen("a.text","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs(str,fp);
    fclose(fp);


}